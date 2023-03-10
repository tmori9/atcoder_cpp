#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string command_list = "";
    cin >> command_list;

    vector<int> now_position{0, 0}; // 現在の座標 pairクラスでも良い

    set<vector<int>> moved_position;
    moved_position.insert({0,0});

    for (int i = 0; i<command_list.length(); i++){
        char command = command_list[i]; // コマンドの一文字
        if (command == 'R'){
            now_position[0] += 1;
        } else if (command == 'L'){
            now_position[0] -= 1;
        } else if (command == 'U'){
            now_position[1] += 1;
        } else {
            now_position[1] -= 1;
        }

        if (moved_position.find(now_position) != moved_position.end()){
            cout << "Yes" << endl;
            return 0;
        }
        moved_position.insert(now_position);
    }
    cout << "No" << endl;
}
