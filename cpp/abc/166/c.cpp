#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main() {
    int n,m;
    cin >> n>>m;
    vector<ll> h(n);
    rep(i,n) {
        cin >> h.at(i);
    }
    vector<vector<int>> load(n);
    rep(i,m){
        int a,b;
        cin >>a>>b;
        a--;b--;
        load[a].push_back(b);
        load[b].push_back(a);
    }

    int cnt=0;
    rep(i,n){
        if(load[i].size()==0) {
            cnt++;
        }else{
            ll mx =h.at(i);
            bool singi = true;
            rep(j,load[i].size()){
                //ここイコールいるかどうか
                if (mx <= h.at(load[i].at(j))) {
                    singi = false;
                    break;
                }
            }
            if (singi){
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
