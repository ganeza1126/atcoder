#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
template<typename T>
void fin (T a){
    cout<<a<<endl;
    exit(0);
}

const long long INF = 1e18;

int main(){
    int n;cin>>n;
    vector<ll> a(n);
    rep(i,n)cin >> a[i];
    sort(a.begin(),a.end());
    if(!a[0]) fin(0);
    ll ans = 1;
    rep(i,n){
        if(INF/ans+100<a[i])fin(-1);
        ans *=a[i];
        if (ans> INF)fin(-1);
    }
    fin(ans);

}
/*
int main() {
    int n;
    cin >> n;
    ull ans=1;
//    int cnt=0;
    ull ref = pow(10,18);

    ull realans=10;
    rep(i,n){
        ull tmp;
        ull oldans = ans;
        cin>>tmp;
        ans *=tmp;
        if(ans>ref){
            realans = 2;
        }
        if(tmp==0){
            realans=0;
            break;
        }
        if (ans/tmp != oldans) {
            realans=2;
            //ここにbreakを入れてたのがミス！！！！！！！！！！！！
        }
    }

    switch(realans){
        case 2:
            cout<<-1<<endl;
            break;
        case 0:
            cout<<0<<endl;
            break;
        case 10:
            cout<<ans<<endl;
            break;

    }
    return 0;
}
*/
