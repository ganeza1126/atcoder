#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,a,b;
    cin >> k >> a>> b;
    if ((b%k==0)||(a%k==0)){
        cout << "OK" << endl;
    }else if (b/k-a/k >=1) {
        cout << "OK" <<endl;
    } else {
        cout << "NG" << endl;
    }
    return 0;
}
