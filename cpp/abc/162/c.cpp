#include <bits/stdc++.h>
#include <numeric>
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

    ll ans =0;
    int k;cin>>k;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++) {
            for (int l = 1; l <= k; l++) {
                int tmp = gcd(j,l);
                ans += gcd(tmp, i);
            }
        }
    }

    fin(ans);


}
