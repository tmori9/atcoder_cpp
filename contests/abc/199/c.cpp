#include <bits/stdc++.h>
using namespace std;
#define inf 1000000007

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;
  int q;
  cin >> q;

  bool flag = false;
  // int box[q][3];
  int q_t, q_a, q_b;
  string tmp;
  for (int i = 0; i < q; i++) {
    /*cin >> box[i][k];*/
    cin >> q_t >> q_a >> q_b;
    q_a -= 1;
    q_b -= 1;
    if (q_t == 2) { // ひっくり返す
      flag = !flag;
    } else {
      if (flag == false) {
        swap(s[q_b], s[q_a]);
      } else {
        if (q_a < n) {
          q_a = n + q_a;
        } else {
          q_a = q_a - n;
        }

        if (q_b < n) {
          q_b = n + q_b;
        } else {
          q_b = q_b - n;
        }
        swap(s[q_b], s[q_a]);
      }
    }
  }
  string pre = s.substr(0, n);
  string post = s.substr(n);
  if (flag == true) {
    cout << post << pre << endl;
  } else {
    cout << pre << post << endl;
  }
}
