#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    int k;
    cin>>k;
    queue<ll> a;
    int cnt=0;
    for(int i=1;i<10;i++){
        a.push(i);
    }
    ll tmp;
    while(cnt<=k){
        tmp = a.front();
        a.pop();
        aa;
        switch(tmp%10)
            case 0:




    }
}

/* できなかった
int main() {
    int k;
    cin>>k;
    vector<vector<int>> dp(10);
    rep(i,9){
        dp[i+1].push_back(1);
    }
    int sum=9;
    vector<int> lst;
    lst.push_back(sum);

    int cnt=0;
    int tmp=0;
    while(sum<k){
        int lsum=0;

        tmp=dp[0][cnt]+dp[1][cnt];
        lsum +=tmp;
        dp.at(0).push_back(tmp);

        tmp=dp[8][cnt]+dp[9][cnt];
        lsum +=tmp;
        dp.at(9).push_back(tmp);

        for(int i=1;i<9;i++){
            tmp=dp[i][cnt]+dp[i-1][cnt]+dp[i+1][cnt];
            lsum +=tmp;
            dp.at(i).push_back(tmp);
        }

        sum += lsum;
        lst.push_back(lsum);
        tmp=0;
    }
    int keta = lst.size();
    cout << keta <<endl;


    return 0;
}
*/
