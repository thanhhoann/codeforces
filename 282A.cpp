#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int n;
  cin >> n;
  string s;
  int sum = 0;
  while (n--) {
    cin >> s;

    bool isPlus = false;

    for (auto const c : s) {
      if (c == '+') {
        isPlus = true;
        break;
      }
    }

    isPlus == true ? sum++ : sum--;
  }

  cout << sum;
}

int main() {
  solve();
  return 0;
}
