#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    int h,m,h2,m2,k;
    cin>>h>>m>>h2>>m2>>k;
    int ans;
    ans = (h2-h)*60+m2-m-k;
    if (ans>=0) {
        cout << ans<<endl;
    }else{
        cout << 0<<endl;
    }

}

