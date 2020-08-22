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
    int n;cin>>n;
    ll num = 1000001;
    int ans = 0;
    vector <int>b(num,0);
    rep(i,n){
        int x; cin>>x;
        b[x]++;
    }
    rep(i,num){
        if(b[i]==0)continue;
        for(int j=i*2;j<=num;j+=i){
            b[j]=2;
        }
        if(b[i]==1)ans++;
    }
    fin(ans);

}


