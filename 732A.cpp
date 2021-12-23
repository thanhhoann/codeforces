#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  int k, r;
  cin >> k >> r;

  int count = 1;
  int total = 0;

  bool flag = true;

  while (flag) {
    total = count * k;
    count++;
    if (total % 10 == 0 || (total - r) % 10 == 0)
      flag = false;
  }
  cout << count - 1;
}

int main() {
  solve();
  return 0;
}
