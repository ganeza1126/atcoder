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
/*
template<typename S>
void print(S a){
    cout<<a<<endl;
}
*/

stack<ull> p;
ull n;
stack<char> ans;

/*
void print(){
    ull tmp;
    tmp = n/p.top()-1;
    n %= p.top();
    p.pop();
    if(n==0){
        cout<< 'z';
    }else{
        char ans='a';
        ans += tmp;
        cout << ans;
    }
}
*/
/*
void print(){
    ull tmp;
    tmp = n/p.top()-1;
    if(n==0){
        cout<< 'z';
    }else{
        n %= p.top();
        p.pop();
    if(tmp>=26) {
        cout<<'z';
    }else{
        char ans='a';
        ans += tmp;
        cout << ans;

    }
    }
}
*/
void ireru(){
    char aaa = 'a'-1;
    int tmp = n%26;
    if(tmp==0){
        n-=26;
        aaa+=26;
    }else{
        aaa += tmp;
    }
    n/=26;
    ans.push(aaa);
}



int main(){
    cin>>n;
    int k=0;
    ull num=0;
    ull tmp;

    p.push(1);
    while(n>num){//イコール怪しい
        k++;
        tmp = pow(26,k);
        p.push(tmp);
        num+=pow(26,k);
    }
    p.pop();

    rep(i,k){
        ireru();
    }
    rep(i,k){
        char tmp= ans.top();
        ans.pop();
        cout<<tmp;
    }





    return 0;
}


