#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; // 合計人数は 5*n
    cin >> n;

    vector<int> score_vec(n*5); // 評点の配列
    for (int i = 0; i<n*5; i++){
        cin >> score_vec.at(i);
    }

    sort(score_vec.begin(), score_vec.end());

    int sum_point = 0;
    for (int i = n; i<n*4; ++i){
        sum_point += score_vec[i];
    }
    double takahashi_point = (double)sum_point / (double)(3*n);
    cout << takahashi_point << endl;
}
