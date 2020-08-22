#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef  long long ll;

template<typename T>
void fin (T a){
    cout<<a<<endl;
    exit(0);
}
template<typename S>
void print(S a){
    cout<<a<<endl;
}

int main(){
    int a;
    rep(i,5){
        cin>>a;
        if(a==0){
            fin(i+1);
        }
    }

}
