#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;




int main() {
    int n;
    cin >> n;
    ull ans=1;
//    int cnt=0;
    ull ref = pow(10,18);

    ull realans=10;
    rep(i,n){
        ull tmp;
        ull oldans = ans;
        cin>>tmp;
        ans *=tmp;
        float logoldans = log10(oldans);
        float logans = log10(ans);
        if(ans>ref){
            realans = 2;
        }
        if(tmp==0){
            realans=0;
            break;
        }
        if (ans/tmp != oldans) {
            realans=2;
            break;
        }
//        if(logoldans+logans>18){
//            realans=2;
//            break;
//        }
    }

    switch(realans){
        case 2:
            cout<<-1<<endl;
            break;
        case 0:
            cout<<0<<endl;
            break;
        case 10:
            cout<<ans<<endl;
            break;

    }
    return 0;
}





/*
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef unsigned long long ll;
//typedef unsigned long long ull;



int main() {
    ll a;
    double b;
    cin>>a>>b;
//    cout << b<<endl;
    ll a0 =  b;
    ll a1 =  b*10;
    ll a2 =  b*100;
//    cout<<a1<<endl;
//    cout<<a2<<endl;
    ll b0 = a0%10;
    ll b1 = a1%10;
    ll b2 = a2%10;
    ll c0 = a*b0;
    ll c1 = a*b1/10;
    ll c2 = a*b2/100;
    ll ans= c0+c1+c2;
//    cout<<b1<<endl;
//    cout<<b2<<endl;
//    cout<<c1<<endl;
//    cout<<c2<<endl;
    cout<<ans<<endl;





    return 0;
}
*/
