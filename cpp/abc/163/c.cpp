#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;

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

    ll n;
    cin>>n;
    vector<int> a(n-1);
    rep(i,n-1)cin>>a[i];
    vector<int>ans(n);
    rep(i,n-1){
        ans[a[i]-1]++;
    }
    rep(i,n){
        print(ans[i]);
    }
    return 0;


}
