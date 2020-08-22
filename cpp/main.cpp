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

<<<<<<< Updated upstream
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




=======
int main(){
    int a = 'A';
    char b;
    int pt = 1;
    int tmp = 98;
    vector<char> ans;
    rep(i,25){
        b = pt%26+a-1;
        ans.push_back(b);
        pt+=tmp;
        b = pt%26+a-1;
        ans.push_back(b);
        tmp -=4;
    }

    rep(i,25){
        cout<<ans[i*2];
    }
    for(int i=99;i>=0;i-=2){
        cout<<ans[i];
    }
>>>>>>> Stashed changes
    return 0;
}


