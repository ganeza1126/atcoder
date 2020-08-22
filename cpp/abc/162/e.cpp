#include <bits/stdc++.h>
#include <numeric>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef  long long ull;
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
    int k;cin>>k;

    vector<ll> dp(k+1);
    for(int i=k;i>=1;i--){
        int tmp=k/i;
        ll tmpans =1;
        rep(t,n){
            tmpans*=tmp;
            tmpans%=LIM;
        }
        for(int j=tmp;j>=1;j--){
            tmpans-=dp.at(j*i);
        }
        if(tmpans<0)tmpans+=LIM;
        dp.at(i)=tmpans;
    }
    ull ans=0;
    for(int i=1;i<=k;i++){
        ans +=dp.at(i)*i;
        ans %= LIM;
    }

    fin(ans);


}
