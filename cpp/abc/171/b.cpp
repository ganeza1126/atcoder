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
    int n,k;
    cin>>n>>k;
    vector<int> p(n);
    rep(i,n){
        cin>>p.at(i);
    }
    sort(p.begin(),p.end());
    int ans=0;
    rep(i,k){
        ans+=p.at(i);
    }
    fin(ans);


    return 0;
}


