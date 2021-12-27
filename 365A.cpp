#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n, k;
  cin >> n >> k;

  string S[n], s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    S[i] = s;
  }

  int res = 0;

  for (int i = 0; i < n; i++) {
    int count = 0;

    for (int j = 0; j <= k; j++) {
      string num = to_string(j);
      if (S[i].find(num) != -1) {
        count++;
      }
    }

    if (count == k + 1) {
      res++;
    }
  }
  cout << res;
}

int main() {
  solve();
  return 0;
}
