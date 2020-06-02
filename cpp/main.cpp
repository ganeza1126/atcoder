#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef unsigned long long ll;
//typedef unsigned long long ull;


int main() {
    ll a;
    double b;
    cin>>a>>b;

    ll aa =  b/10;
    ll a0 =  b;
    ll a1 =  b*10;
    ll a2 =  b*100;
    ll b0 = a0%10;
    ll b1 = a1%10;
    ll b2 = a2%10;
/*
    ll cc = aa*a*100;
    ll c0 = b0*a*10;
    ll c1 = b1*a;
    ll c2 = b2*a/10;
*/
    ll c2 = b2*a/10;
    ll c1 = (b1*a+c2)/10;
    ll c0 = b0*a;
    ll cc = aa*a*10;
    ll ans= cc+c0+c1;
    cout<<ans<<endl;
//    cout<<9990000000000000<<endl;






    return 0;
}

