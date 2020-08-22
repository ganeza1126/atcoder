#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef  long long ll;
typedef  unsigned long long ull;

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
    ll n;cin>>n;
    ll tmp;
    vector<ll> a(n);
    ll ans = 0;
    rep(i,n){
        cin>>tmp;
        a.at(i) = tmp;
        ans^=tmp;
    }
    rep(i,n-1){
        tmp = ans^a[i];
        cout<<tmp<<" ";
    }
    tmp = ans^a[n-1];
    cout<<tmp<<endl;



    return 0;
}


