#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef  long long ll;
typedef  unsigned long long ull;

template<typename T>
void fin (T a){
    cout<<a<<endl;
    exit(0);
}

template<typename S>
void print(S a){
    cout<<a<<endl;
}

template<typename U>
void pprint(U a){
    cout<<a;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    double a,b;
    cin>>n>>a>>b;

    int mul;
    mul = pow(2,n);
    pprint(a/mul);
    pprint(" ");
    print(b*mul);




    return 0;
}


