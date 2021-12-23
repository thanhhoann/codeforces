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

  int L[n], R[n];

  for (int i = 1; i <= n; i++) {
    cin >> L[i] >> R[i];
  }

  int count = 0;

  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
      if (L[i] == R[j])
        count++;
      if (R[i] == L[j])
        count++;
    }
  }
  cout << count;
}

int main() {
  solve();
  return 0;
}
