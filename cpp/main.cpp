#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n,m;
    cin >> n>> m;
    vector<vector<int>> gra(n);
    int a,b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        a--;b--;
        gra[a].push_back(b);
        gra[b].push_back(a);

    }
    vector<int> ans(n,-1);
    queue<int> que;
    int tmp=0;
    que.push(tmp);
    while (que.size()) {
        tmp = que.front();que.pop();
        for (int i = 0; i<gra[tmp].size(); i++) {
            int k = gra[tmp].at(i);
            if (ans.at(k)==-1) {
                que.push(k);
                ans.at(k) = tmp+1;
            }
        }
    }
    if (*min_element(ans.begin()+1, ans.end()) != -1) {
        cout<< "Yes"<<endl;
        for(int i=1;i<n;i++){
            cout<< ans.at(i) << endl;
        }
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}
