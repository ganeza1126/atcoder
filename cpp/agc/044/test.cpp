#include <bits/stdc++.h>
using namespace std;
//atcoder practiceA
// https://atcoder.jp/contests/abs
int n,a,b,c,d;
vector <int> memo(10);
int fib(int n){
    if (n == 1) return d;
    if (n == 0) return 0;
    if (memo.at(n) !=0) return n;
    vector <int> vec(4);
    vec.at(0) = a+min(fib(n/2)+d*(n%2),fib(n/2+1*(n%2!=0))+d*(n%2));
    vec.at(1) = b+min(fib(n/3)+d*(n%3),fib(n/3+1*(n%3!=0))+d*(3-n%3));
    vec.at(2) = c+min(fib(n/5)+d*(n%5),fib(n/5+1*(n%5!=0))+d*(5-n%5));
    vec.at(3) = d+min(fib(n-1),fib(n+1));
    return memo.at(n) = *min_element(vec.begin(),vec.end());
}

int main() {
    int t=1;
//    cin >> t;

//    vector <int> n(t),a(t),b(t),c(t),d(t);
//    for (int i = 0; i < t; i++) {
//        cin >> n.at(i) >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);
//    }
//    vector <int> lst(5);
//    int now =0;
//    int coin = 0;
//    int tmp;
//    vecotr <int> lst(4);
//    for (int i = 0; i< t;i++){
//        cin >> n>>a>>b>>c>>d;
//        coin += d;
//        now = 1;
//        while (now == n){
//            tmp = now-n;
//            lst.at(0) = tmp/2
//
//        }
//    int memo[n];
//    for (int i=0; i<t;i++){
//        cin >> n>>a>>b>>c>>d;
//        int memo[n];
//        fib(n);
//    }
    cout << "aaa" << endl;

    return 0;
}
