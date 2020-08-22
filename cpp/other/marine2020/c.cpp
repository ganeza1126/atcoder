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

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    rep(i,n){cin>>a.at(i);}
    vector<ll> b(n);
    vector<ll> c(n);

    vector<ll> mx(n);
    rep(i,n){
        mx[i] = i;
    }
    rep(i,k){
        b = c;
        int nowlen = n-mx.size();
        cout << nowlen<<endl;
        rep(z,n){
            b[z] = nowlen;
        }
        if (nowlen >=n){break;}
        for(int j=0;j<=mx.size()-1;j++){
            int ss = j-a[j];
            int st=max(0, ss);
            int en = min(n-1, j + a[j]);
            for(int m = st;m<=en;m++){
                b[m]++;
                if(b[m]>=n){
                    mx.erase(remove(mx.begin(),mx.end(),m),mx.end());
                }
            }
        }
//        for(int j=0;j<=mx.size()-1;j++) {
//            if (b[j] >= n) {
//                mx.erase(remove(mx.begin(), mx.end(), j), mx.end());
//            }
//        }
        a = b;
    }
    rep(i,n){
        cout<<b[i];
    }
    return 0;
}
/*
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    rep(i,n){cin>>a.at(i);}
    vector<ll> b(n);
    vector<ll> c(n);

    vector<ll> mx(n);
    rep(i,n){
        mx[i] = i;
    }
    rep(i,k){
        b = c;
        rep(j,n){
            int ss = j-a[j];
            int st=max(0, ss);
            int en = min(n-1, j + a[j]);
            for(int m = st;m<=en;m++){
                b[m]++;
            }
        }
        a = b;
    }
    rep(i,n){
        cout<<b[i];
    }
    return 0;
}
*/
