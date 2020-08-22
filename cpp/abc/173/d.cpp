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



vector<bool>IsPrime;

void sieve(ll max){
    if(max+1 > IsPrime.size()){     // resizeで要素数が減らないように
        IsPrime.resize(max+1,true); // IsPrimeに必要な要素数を確保
    }
    IsPrime[0] = false; // 0は素数ではない
    IsPrime[1] = false; // 1は素数ではない

    for(size_t i=2; i*i<=max; ++i) // 0からsqrt(max)まで調べる
        if(IsPrime[i]) // iが素数ならば
            for(size_t j=2; i*j<=max; ++j) // (max以下の)iの倍数は
                IsPrime[i*j] = false;      // 素数ではない
}




int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n; cin>>n;
    sieve(n);
    vector<ll>prime;
    rep(i,n){
        if(IsPrime[i])prime.push_back(i);
    }

    ull ans=0;

    for(ll i=1;i<=n;i++){
        auto it = find(prime.begin(),prime.end(),i);
        if(it != prime.end()){
            ans+=(2*i);
        }else{
            ll tmp = i;
            ll anstmp = 1;
            rep(k,prime.size()){
                int cnt=0;
                ll pr = prime[k];
                while(tmp%pr==0){
                    tmp/=pr;
                    cnt++;
                }
                anstmp*=(cnt+1);
            }
            ans+=(anstmp*i);
        }
    }

    print(ans);

    return 0;

}