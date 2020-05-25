#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a,b,n;
    cin >> a >> b>> n;
    cout << min(b-1,n)*a/b << endl;

    return 0;
}
