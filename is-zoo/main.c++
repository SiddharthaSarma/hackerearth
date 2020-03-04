// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/description/


#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string str;
  cin >> str;
  int len = str.size();
  int count = 0;
  for (int i = 0 ; i < len; ++i) {
      if (str[i] == 'z') {
        count ++;
      }
  }
  
  string output = 3 * count == len ? "Yes" : "No";
  cout << output;
  return 0;
}
