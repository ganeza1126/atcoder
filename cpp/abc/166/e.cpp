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
        ans += mp[i-a];
        mp[i+a]++;
    }
    cout << ans << endl;
    return 0;
}
