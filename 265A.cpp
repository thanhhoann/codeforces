#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

#define ll long long

#define db(x) cout << #x << " = " << x << endl;

void solve() {
  string s, t;
  cin >> s >> t;

  int count = 0;
  for (int i = 0; i < t.length(); i++) {
    if (s[count] == t[i])
      count++;
  }
  cout << count + 1;
}

int main() {
  solve();
  return 0;
}
