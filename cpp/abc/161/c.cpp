#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main() {
    ll n,k;
    cin>>n>>k;
    ll ans;
    if (n>k){
        ans = n-k*(n/k);
    }else{
        ans = n;
    }
    ans = min(ans,abs(k-ans));
    cout << ans << endl;

    return 0;
}

