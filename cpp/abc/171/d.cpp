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


int main(){
    int n;
    cin>>n;
    ll tmp;
    ull ans=0;

    map<int,ll> mp;
    rep(i,n){
        cin>>tmp;
        ans+=tmp;
        mp[tmp]+=1;
    }
    int q;cin>>q;
    int b,c;

    rep(i,q){
        cin>>b>>c;
        auto it = mp.find(b);
        if(it !=mp.end()){
            tmp = it->second;
            mp[c]+=tmp;
            mp.erase(it);
            ans += (c-b)*tmp;
            print(ans);
        }else{
            print(ans);
        }
    }


    return 0;
}


