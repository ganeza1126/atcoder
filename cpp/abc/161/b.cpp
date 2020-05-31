#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    float sum=0;
    rep(i,n){
        cin>>a[i];
        sum+=a[i];
    }
    sum = sum/(4*m);
    sort(a.begin(),a.end());
    int cnt=0;
    rep(i,m){
        if(a[n-1-i]>=sum){cnt++;};
    }
    if(cnt==m){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}

