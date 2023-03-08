# atcoder_cpp
c++用のatcoder開発環境

## command
```
# ログイン
$ acc login
$ oj login https://beta.atcoder.jp/

# 問題のダウンロード
$ oj d https://atcoder.jp/contests/abc291/tasks/abc291_a

# cppのコンパイル
`CTRL + SHIFT + B`でコンパイル

# 問題のチェック
$ oj t -c {コンパイルファイル}

# example
$ oj t -c ./a.out
```

## memo
- Dev Container 上で git を操作するために public key の設定が必要
- 毎回設定するのは大変なので git の操作をするときだけ wsl に戻せば良い
