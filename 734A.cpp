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
  string s;
  cin >> n >> s;

  int a = 0, b = 0;

  for (auto const c : s) {
    if (c == 'A')
      a++;
    else
      b++;
  }

  if (a > b)
    cout << "Anton";
  else if (a < b)
    cout << "Danik";
  else
    cout << "Friendship";
}

int main() {
  solve();
  return 0;
}
