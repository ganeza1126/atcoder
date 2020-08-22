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


//akatsukiコーディングテスト
/*
++
-
*
+
@(xy+yz+zx)
 を出力
in:1 2 -
out:-1
*/
int main(){
    string s;
    int kigou;
    ll x;
    ll y;
    ll z;
    ll ans;
    ll len;
    stack<ll> st;
    while(cin>>s){
        len = s.size();
        kigou = s[len-1];
        if((kigou>=48)&&(kigou<=57)){
            st.push(atoll(s.c_str()));
        }else{
            if(st.empty()){
                cout<< "invalid"<<endl;
                return 0;
            }
            x = st.top();st.pop();
            if (len== 2){
                st.push(++x);
            }else{
                if(st.empty()){
                    cout<< "invalid"<<endl;
                    return 0;
                }
                y = st.top();st.pop();
                switch(kigou){
                    case 42:
                        st.push(x*y);
                        break;
                    case 43:
                        st.push(x+y);
                        break;
                    case 45:
                        st.push(y-x);
                        break;
                    case 64:
                        if(st.empty()){
                            cout<< "invalid"<<endl;
                            return 0;
                        }
                        z = st.top();st.pop();
                        st.push(x*y+y*z+z*x);
                        break;
                }
            }
        }
    }
    ans = st.top();st.pop();
    if (st.empty()){
        cout << ans<< endl;
    }else{
        cout<< "invalid"<<endl;
        return 0;
    }

}
