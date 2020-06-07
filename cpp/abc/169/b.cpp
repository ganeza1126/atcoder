#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef unsigned long long ll;
//typedef unsigned long long ull;


///////////////////////////////////////////////////
//bに9.79を入れると9.789999999となっておかしくなる
///////////////////////////////////////////////////
int main() {
    ll a;
    long double b;
    cin>>a>>b;
    //このようにして回避
    ll intb = (int)(b*100+.1) ;
    cout<< a*intb/100<<endl;


    return 0;
}

