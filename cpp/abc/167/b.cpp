#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll a,b,c,k;
    cin >> a >> b>> c>>k;
    ll ans=0;
    if (k<=a){
        ans = k;
    }else if(k<=a+b) {
        ans = a;
    } else {
        ans = a-(k-a-b);
    }
    cout << ans << endl;



    return 0;
}
