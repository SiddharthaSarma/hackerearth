// https://www.hackerearth.com/challenges/competitive/april-circuits-20/algorithm/lets-shift-2-36d90caa/
#include <bits/stdc++.h>

#define ll long long
#define endl "\n"
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

using namespace std;

int main() {
  IOS;
  int T;
  cin >> T;
  while (T--) {
    int n, k;
    cin >> n >> k;
    string c;
    cin >> c;
    if (c == "L") {
      bitset<16> b((n << k | n >> (16 - k)));
      cout << (int)(b.to_ulong()) << " " << endl;
    }
    if (c == "R") {
      bitset<16> b((n >> k | n << (16 - k)));
      cout << (int)(b.to_ulong()) << " " << endl;
    }
  }
  return 0;
}
