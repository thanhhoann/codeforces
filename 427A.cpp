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
  int a;

  int polices = 0, crimes = 0;

  while (n--) {
    cin >> a;

    if (a == -1) {
      if (!polices)
        crimes++;
      else
        polices--;
    } else
      polices += a;
  }
  cout << crimes;
}

int main() {
  solve();
  return 0;
}
