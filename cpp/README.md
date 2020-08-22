#メモ
- [公式のテストケースが入っているサイト](https://www.dropbox.com/sh/arnpe0ef5wds8cv/AAAk_SECQ2Nc6SVGii3rHX6Fa?dl=0)&lst=)
- [atcoder problems](https://kenkoooo.com/atcoder/#/table/oinari)

# cpp辞書
- pair<type, type> a;
	- pair<int, float> a={1,2.2};a.first->1,a.second->2.2
- pi -> M_PI
- char（1文字）をint 変換できない'9'→ 9など
- 重複解除：`lst.erase(unique(lst.begin(),lst.end()),lst.end())`
- カンマ区切り(1,2)
- vector<vector<int>> = a(n,vector<n>)
---
# tips
- dpは$O(n*m)$なので$n,m$が大きいときに使うべきではない（当たり前）
- 桁落ちを回避するにはなるべく引き算を回避すると良い
- dpにbool値を使うのはあまりよくない
- データの桁数に注意long intとかを使う，165-b
- cinよりscanfの方が速い，下を追加した方が早くなる
```
cin.tie(0);
ios::sync_with_stdio(false);
```
---
# できなかった問題(dまで）
- abc170(d):エラトステネスの篩の実装ができるか(dp)
- abc169(d):dpを使うのかどうか，
- abc169(d):素因数分解について，map,vecotrのfor文について`for(auto x: mp){ x.first,x.second}`
- abc169(c):浮動小数点の話（doubleに179を入れると，1.78999999999となっておかしくなる
- abc169(b):オーバーフローのお話（オーバフローを確認する方法はlogを取る（log10(a))もしくは，$a \cdot b = c$のとき，$c/b \neq b $で確認する
- abc161(d):queueの使い方
- abc164(d):良問,桁数が20000桁ある系の計算方法，modの使い方，string->long long`atoll(str.substr(a,b).c_str)`
- abc165(c):dfs(深さ優先探索)
- abc166(e):mapのうまい使い方
- abc167(c,d):別解としてビットシフトの手法を確認
- abc168(d):bfs(幅優先探索）
- agc044(a):mapの使い方，再帰関数
- nomura2020(c):良問(600点）（漸化式の立て方＋文字の型がオーバーフローしないように）

---
# 使い方問題
- abc171(d):map.find,erase,iteratorについての使い方（どんどんmpの配列を消していく方法
---
# clion関連
- shift enterで行の完成（従来はcommand shift enter)
- command shift enterで行の擦り抜け（従来はshift enter)
- ctrl R で実行

---
# sample code
### 素因数分解
```
map<ll,ll> mp;
void func(int n){
    for (ll i = 2; i * i <= n; i++) {
        while(n%i==0){
            n/=i;
            mp[i]++;
        }
    }
    if(n !=1)mp[n]++;

    return 0;

}
```
