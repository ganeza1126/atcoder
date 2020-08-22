#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
const ll LIM =1e9+7;

template<typename T>
void fin (T a){
    cout<<a<<endl;
    exit(0);
}
template<typename S>
void print(S a){
    cout<<a<<endl;
}


//dpは用いない

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n,k;cin>>n>>k;
    n++;

    ll ans=0;
    for(int i=k;i<=n;i++){
//        ull mn = (i-1)*i/2;
//        ull mx = (n-1+n-i)*i/2;
        ull tmp = i*(n-i);
        if(tmp/i!=n-i){
            tmp =(i%LIM)*((n-i)%LIM);
        }
        ans+=tmp+1;
        if(ans>=LIM)ans%=LIM;
    }
    fin(ans);
}
