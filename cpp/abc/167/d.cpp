#include <bits/stdc++.h>
#define rep(i, n) for(i = 0; i < n; i++)
#define int long long
using namespace std;



//おすすめ解答！！！！！！！！！！！
int n, k;
int a[200000];
int t[60][200000];

signed main() {
    int i, j;

    cin >> n >> k;
    rep(i, n) { cin >> a[i]; a[i]--; }
    rep(i, n) t[0][i] = a[i];

    rep(i, 59) {
        rep(j, n) {
            t[i + 1][j] = t[i][t[i][j]];
        }
    }

    int p = 0;
    rep(i, 60) {
        if ((k >> i) & 1) {
            p = t[i][p];
        }
    }
    cout << p + 1 << endl;
    return 0;
}


//自分の回答
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


//うまくいかなかった->解決（原因はwhileの3行目）
int main() {
    int n;
    ll k;
    cin >> n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
        a.at(i)--;
    }
    vector<int> flag(n);
    vector<int> anslst(n);
    int count=0;
    int now= 0;
    while (flag[now] == 0) {
        if(count>=k){
            cout << now+1 << endl; //ミスの原因，ここのnowを+1していなかった！！！！！！！！
            return 0;
        }
        flag[now] = 1;
        anslst[count] = now;
        now = a[now];
        count++;
    }
    int start=0;
    for(int i=0;i<count;i++){
        if(anslst[i]==now) {
            start = i;break;
        }else{continue;}
    }
    int loop = count-start;
    if (loop == 0) {
        cout << now <<endl;
    }else{
        int mod = (k-start)%loop;
        cout << anslst[mod+start]+1 << endl;
    }

    return 0;
}

