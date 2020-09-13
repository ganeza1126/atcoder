#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef  long long ll;
typedef  unsigned long long ull;

template<typename T>
void fin (T a){
    cout<<a<<endl;
    exit(0);
}

template<typename S>
void print(S a){
    cout<<a<<endl;
}

template<typename U>
void pprint(U a){
    cout<<a<<" ";
}


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n,m;
    cin>>n>>m;
    vector<ll> g(n);
    ll groupid=1;
    ll x,y;
    ll sum = n;

    if(m==0) {
        fin(1);
    }

    rep(i,m){
        if(sum==0){
            break;
        }
        cin>>x>>y;
        x--;y--;

        if(g[x]+g[y]==0){
            g[x]=groupid;
            g[y]=groupid;
            groupid++;
            sum -=2;
        }else if (g[x]==0){
            g[x] = g[y];
            sum -=1;
        } else if (g[y] == 0) {
            g[y] = g[x];
            sum -=1;
        } else if (g[x] != g[y]) {
            rep(i,n){
                if(g[i] == g[y]){
                    g[y] = g[x];
                }
            }
        }

    }

    map<ll,ll> mp;
    rep(i,n){
        mp[g[i]] += 1;
    }

    ll ans = 0;
    for (auto x:mp) {
        ans = max(ans,x.second);
    }

    fin(ans);

    return 0;
}


