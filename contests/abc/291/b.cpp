#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; // 合計人数は 5*n
    cin >> n;

    vector<int> score_vec(n); // 評点の配列
    for (int i = 0; i<n; i++){
        cin >> score_vec.at(i);
    }

    sort(score_vec.begin(), score_vec.end());

    for (int i = 0; i<n; ++i){
        cout << score_vec[i] << " ";
    } 
    cout << endl;
}
