# cpp辞書
- char（1文字）をint 変換できない'9'→ 9など
- 重複解除：`lst.erase(unique(lst.begin(),lst.end()),lst.end())`
- カンマ区切り(1,2)
```
int a,b;
char c;
cin >> a >> c >> b;
```
---
# tips
- cinよりscanfの方が速い，下を追加した方が早くなる
```
cin.tie(0);
ios::sync_with_stdio(false);
```
---
# clion関連
- shift enterで行の完成（従来はcommand shift enter)
- command shift enterで行の擦り抜け（従来はshift enter)
- ctrl R で実行

