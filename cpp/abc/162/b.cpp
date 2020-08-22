#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
//typedef  long long ll;
typedef unsigned long long ll;
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


    int n;cin>>n;
    ll ans=0;
    for(int i=1;i<=n;i++){
        if((i%3!=0)&&(i%5!=0)){
            ans+=i;
        }
    }

    fin(ans);



}
