#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int card_num[N][2];
    for (int i = 0; i < N; i++) {
        cin >> card_num[i][0];
        cin >> card_num[i][1];
    }

    int MOD = 998244353;
    
    int dp[N][2] = {};
    dp[0][0] = dp[0][1] = 1;

    for (int i = 1; i < N; i++){ // トランプ一枚は初期値で代入済み
        for (int pre = 0; pre < 2; pre++){ // pre = 0 は一つ前のカードが表, pre = 1 は一つ前のカードが裏
            for (int now = 0; now < 2; now++){ // # now = 0 は現在のカードが表, now = 1は現在のカードが裏
                if (card_num[i-1][pre] != card_num[i][now]) {
                    dp[i][now] = dp[i][now] + dp[i-1][pre];
                }
            }
        }
        dp[i][0] = dp[i][0] % MOD;
        dp[i][1] = dp[i][1] % MOD;

    }
    cout << (dp[N-1][0] + dp[N-1][1]) % MOD << endl;
}
