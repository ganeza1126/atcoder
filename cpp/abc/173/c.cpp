#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
//typedef  long long ll;
typedef  unsigned long long ll;

template<typename T>
void fin (T a){
    cout<<a<<endl;
    exit(0);
}

template<typename S>
void print(S a){
    cout<<a<<endl;
}


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n,m,k;
    cin>>n>>m>>k;
    queue<ll> a,b;
    rep(i,n){
        ll x;cin>>x;
        a.push(x);
    }
    rep(i,m){
        ll x;cin>>x;
        b.push(x);
    }

    ll ans=0;
    ll t=0;
    ll tmp=0;

    while(t<=k){
        ans++;

        if(a.empty()&&b.empty()){
            break;
        }

        if(a.empty()){
            tmp = b.front();b.pop();
        }else if(b.empty()){
            tmp = a.front();a.pop();
        }else if(a.front()>=b.front()){
            tmp = b.front();b.pop();
        }else{
            tmp = a.front();a.pop();
        }

        t+=tmp;

    }
    fin(ans-1);



}


