// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/description/

#include<bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  string locs[] = {"WS", "MS", "AS", "AS", "MS", "WS", "WS", "MS", "AS", "AS", "MS", "WS"};

  map<int, int> seats;
  seats [0] = -11;
  for (int i = 1, j = 11; i <= 11; ++i, j -= 2) {
     seats[i] = j;
  }

  int input;
  for (int i = 0 ; i < t; ++i) {
    cin >> input;
    int rem = input % 12;
    int seatNo = input + seats[rem];
    int location = seatNo % 12;
    location = location > 0 ? location - 1 : 0;
    cout << seatNo << " " << locs[location] << "\n";        
  }
  return 0;
}
