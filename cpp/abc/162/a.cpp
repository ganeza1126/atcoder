#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
const ll LIM =1e9+7;

template<typename T>
void fin (T a){
    cout<<a<<endl;
    exit(0);
}
template<typename S>
void print(S a){
    cout<<a<<endl;
}



int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);


    int n;cin>>n;
    vector<int> a(3);
    a[0] = n/100;
    a[1] = n%100/10;
    a[2] = n%10;
    rep(i,3){
        if(a[i]==7){
            fin("Yes");
        }
    }
    fin("No");


}
