#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef  long long ll;

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
    int x,n;
    cin>>x>>n;
    int p;
    map<int,int> mp;
    rep(i,n){
        cin>>p;
        p-=x;
        mp[p] = 1;
    }
    int ansp=0;
    int ansm=0;
    int pm = 1;
    while(pm){
        if(mp[ansp] != 0){
            ansp++;
        }else{
            pm = 0;
        }
    }
    pm = 1;
    while(pm){
        if(mp[ansm] != 0){
            ansm--;
        }else{
            pm = 0;
        }
    }
    if(ansp+ansm>=0){
        fin(ansm+x);
    }else{
        fin(ansp+x);
    }



}

