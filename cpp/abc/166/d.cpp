#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main() {
    ll x;
    cin >> x;
    ll n=0;
    ll tmp;
    do{
        n++;
        tmp=5*pow(n,4)+10*pow(n,3)+10*pow(n,2)+5*n+1;
    }while(tmp<=x);


    bool flag=true;
    bool pm=true;
    ll a=0;
    ll b=0;
    while(flag){
        for(ll i=1;i<=n+1;i++) {
            ll tmp = pow(a,5);
            if (tmp - pow((a + i), 5) == x) {
                b = a+i;
                flag = false;
                break;
            }else if (tmp - pow((a - i), 5) == x){
                b=a-i;
                flag = false;
                break;
            }
        }
        a++;
    }
    cout<< a-1 <<" "<< b<<endl;

    return 0;
}
