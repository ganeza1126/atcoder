#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    while(true) {
        c -= b;
        if (c <= 0) {
            cout<<"Yes"<<endl;
            break;
        }
        a -= d;
        if(a<=0){cout<<"No"<<endl;break;}

    }
    return 0;

}

