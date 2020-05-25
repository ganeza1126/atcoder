#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m,x;
vector<int> lst(12);
vector<int> c(12);
vector<vector <int>> a(12);
ll ans=10000000000;

void dfs(int dep,ll money, vector<int> lst){
    if (dep==n){
        int count = 0;
        for (int i=0; i < m; i++) {
            if(lst[i]>=x) count++;
        }
        if (count == m) ans = min(ans,money);
    }else{
//        vector<int> nlst = lst;
//        vector<int> nlst2 = lst;
//        dfs(dep+1,money,nlst);
//        for (int i = 0; i < m; i++) {
//            nlst2[i]+=a[dep].at(i);
//        }
//        dfs(dep+1,money+c.at(dep),nlst2);
        dfs(dep+1,money,lst);
        for (int i = 0; i < m; i++) {
            lst[i]+=a[dep].at(i);
        }
        dfs(dep+1,money+c.at(dep),lst);
    }
}


int main() {
    cin >> n >> m >> x;
    for (int i = 0; i < n; i++) {
        cin >> c.at(i);
        for (int j = 0; j < m; j++) {
            int tmp;
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }
    dfs(0,0,lst);
    if (ans == 10000000000) {
        cout << "-1" << endl;
    } else {
        cout<<ans<<endl;
    }

    return 0;
}

