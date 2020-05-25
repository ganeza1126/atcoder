#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a,b,h,m;
    double deg;
    cin >> a>>b>>h>>m;
    deg = abs(5.5 * m - 30 * h);
    deg = min(deg,360-deg);
    cout <<setprecision(20) << pow(pow(a,2)+pow(b,2)-2*cos(deg*M_PI/180)*a*b,0.5)<<endl;

    return 0;
}
