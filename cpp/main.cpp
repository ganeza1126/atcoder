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


int main(){
    ll n;cin>>n;
    ll ans = 0;
    map<ll,ll> mp;
    for (ll i = 2; i * i <= n; i++) {
        while(n%i==0){
            n/=i;
            mp[i]++;
        }
    }
    if(n !=1)mp[n]++;
    for(auto x : mp) {
        ll s = x.second;
        ll now =1;
        while(now<=s){
            s -= now;
            now++;
            ans++;
        }
    }

    fin(ans);
    return 0;
}
