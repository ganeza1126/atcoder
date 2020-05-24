#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL a,b,c,d;
map<LL,LL> memo;
LL solve(LL n){
    if (n == 0) return 0;
    if (n == 1) return d;
    if (memo.count(n)) return memo[n];
    LL l2 = (n/2)*2;
    LL r2 = ((n+1)/2)*2;
    LL l3 = (n/3)*3;
    LL r3 = ((n+3)/3)*3;
    LL l5 = (n/5)*5;
    LL r5 = ((n+4)/5)*5;
    LL res = 1e18;

    if (n < res/d) res = n*d;
    res = min(res, llabs(l2-n)*d+a+solve(l2/2));
    res = min(res, llabs(r2-n)*d+a+solve(r2/2));

    res = min(res, llabs(l3-n)*d+b+solve(l3/3));
    res = min(res, llabs(r3-n)*d+b+solve(r3/3));

    res = min(res, llabs(l5-n)*d+c+solve(l5/5));
    res = min(res, llabs(r5-n)*d+c+solve(r5/5));

    memo[n] = res;
    return res;
}

int main(){
    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        memo.clear();
        LL n;
        cin >> n>>a>>b>>c>>d;
        cout << solve(n) << endl;
    }
}

