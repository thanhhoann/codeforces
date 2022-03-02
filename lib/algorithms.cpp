#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;
#define ll long long
#define db(x) cout << #x << " = " << x << endl;

void SieveOfEratosthenes(int n) { // print prime numbers _ O(1)
  if (n <= 1)
    cout << "n must be greater than 1 !";
  else {
    vector<bool> primes(n, true);
    for (int i = 2; i <= sqrt(n); i++) {
      if (primes[i]) {
        for (int j = i * i; j <= n; j += i) {
          primes[j] = false;
        }
      }
    }
    for (int i = 2; i <= n; i++)
      if (primes[i])
        cout << i << ' ';
  }
}

int main() {
  SieveOfEratosthenes(200);
  return 0;
}
