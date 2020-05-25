#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int k;
    string s;
    cin >> k >> s;
    if (s.size()>k){
        s = s.substr(0,k)+"...";
    }
    cout << s<<endl;

    return 0;
}
