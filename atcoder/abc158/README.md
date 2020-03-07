# AtCoder Beginner Contest 158

## 2020-03-07

https://atcoder.jp/contests/abc158/submissions?f.User=show0317sw
https://img.atcoder.jp/abc158/editorial.pdf

リアタイ参加した  

#### A - Station and Bus
https://atcoder.jp/contests/abc158/submissions/10601668
a問は解けた  
簡単だった  
c++の比較演算子が心配だったのでググった  
終了後にTwitter見てたらfilterみたいなやり方もあると気づいた  

#### B - Count Balls
b問はどうしてエラーなのか分からないのでとばした  

https://atcoder.jp/contests/abc158/submissions/10641439
`long long int`を使ったら通った  
https://cpprefjp.github.io/lang/cpp11/long_long_type.html
知った  

これも制約を見て`long long`型を使う必要があるか判断するのか  
`int`は4byte (`-2^31 < x < (2^31)-1`) までの数値が扱える  
`10^18`になる可能性がある変数は`10 ** 18 > (2 ** 31) - 1`が真なので`int`では扱えない  
なるほど  

#### C - Tax Increase

cは集中力切れて途中で終戦  

https://atcoder.jp/contests/abc158/submissions/10643999  
acした解答を見ながらやり直した  
全探索は基本らしいので無理にアルゴリズムをつくろうとしなくても良いということを学んだ  
全探索しても良いと判断する基準は､AとBの制約`1≤A≤B≤100`らしいけど､確認してなかったので意識しよう  
