#include <bits/stdc++.h>
using namespace std;
#define inf 1000000007

int main() {
  int l = -1, r = inf;

  int n;
  cin >> n;

  vector<int> a_list(n);
  for (int i = 0; i < n; i++) {
    cin >> a_list[i];
  }
  vector<int> b_list(n);
  for (int i = 0; i < n; i++) {
    cin >> b_list[i];
  }
  for (int i = 0; i < n; ++i) {
    l = max(l, a_list[i]);
    r = min(r, b_list[i]);
  }
  int result = r - l + 1;

  if (result <= 0) {
    cout << 0 << endl;
  } else {
    cout << r - l + 1 << endl;
  }
}
