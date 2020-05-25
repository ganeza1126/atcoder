#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int lst[10];
int n,m,q;
//vector <int> a(q),b(q),c(q),d(q);
vector <int> a(50),b(50),c(50),d(50);
ll ans=0;

void dfs(int dep, int x){
    if (dep==(n-1)){
        lst[dep] = x;
        ll count = 0;
        for (int i = 0; i < q; i++) {
            if (lst[b.at(i)-1] - lst[a.at(i)-1] == c.at(i)) {
                count +=d.at(i);
            }
        }
        ans = max(ans,count);
    }else{
        lst[dep]=x;
        for (int i = x; i <= m; i++) {
            dfs(dep+1,i);
        }
    }
}


int main() {
    cin >> n >> m >> q;
    for (int i = 0; i < q; i++) {
        cin >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);
    }
    for(int k=1;k<=m;k++){
        dfs(0,k);
    }
    cout<<ans<<endl;
    return 0;
}
