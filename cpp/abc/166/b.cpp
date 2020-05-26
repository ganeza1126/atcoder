#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main() {
    int n,k;
    cin >> n>>k;
    vector<int> lst(n);
    rep(i,k){
        int d;
        cin >> d;
        rep(j,d){
            int a=0;
            cin >> a;
            a--;
            lst.at(a) += 1;
        }
    }
    int cnt=0;
    rep(i,n){
        if(lst.at(i)==0){
            cnt++;
        }
    }
    cout << cnt << endl;


    return 0;
}
