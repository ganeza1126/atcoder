#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s,t;
    cin >> s>>t;
//    cout << s << endl;
//    cout << s << endl;
    if (s == t.substr(0,t.size()-1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }




    return 0;
}
