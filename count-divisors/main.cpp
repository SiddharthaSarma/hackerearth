// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/

#include<bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int l = 1, r = 1, k = 1;
  cin >> l >> r >> k;
  cout << ((r/k)-((l-1)/k)) << endl;
  return 0;
}
