#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main() {
    int n;
    cin>>n;
    vector<ll> l(n);
    vector<ll> r(n);
    map<int,int>mp;
    ll ans=0;
    rep(i,n){
        int a;
        cin>> a;
        //今回l=i+a
        //    r=j-a
        //    x= r=lとなる(i,j)の組み合わせの数を調べている
        //この操作で，r=xの位置にl=xとなる数が入っているものを足している
        ans += mp[i-a];
        //この操作でmp[x]には，l=xとなるiの数が入っている
        mp[i+a]++;
    }
    cout << ans << endl;
    return 0;
}
