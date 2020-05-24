#!/bin/zsh

cd `dirname $0`
dir=`pwd`

echo $dir

contest=$1
number=$2


echo "Create contest directory..."
mkdir $contest
cd $contest


echo "Create contest number directory..."
mkdir $number
cd $number


echo "Create files."

#add
touch input.txt
echo "created file: input.txt"
#add

# cpp file template
template=$(cat <<EOS
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    return 0;
}
EOS
)

filelist=("a" "b" "c" "d" "e" "f" "test")

for file in ${filelist[@]}
do
    touch ${file}.cpp
    echo "$template" > ${file}.cpp
    echo "created file: ${file}.cpp"
done


echo "Add executable into CMakeLists.txt"

cd ..

# Write settings into CMakeLists.txt
echo "" >> ./CMakeLists.txt
echo "# Contest $contest $number" >> ./CMakeLists.txt

for file in ${filelist[@]}
do
    echo "add_executable(${number}_${file} $number/${file}.cpp)" >> ./CMakeLists.txt
done
