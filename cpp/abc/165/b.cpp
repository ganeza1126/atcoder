#include <bits/stdc++.h>
using namespace std;

int main() {
    long int x;
    cin >> x;
    long int i = 100;
    int cnt=0;
    while(i<x){
        i *= 1.01;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
