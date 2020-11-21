#include <bits/stdc++.h>
using namespace std;
int main(){
  const vector<int>v{4, 6, 9, 11};
  int x, y, gx, gy;
  cin >> x >> y;
  if(find(v.begin(), v.end(), x) != v.end()) gx = 2;
  else if(x == 2) gx = 3;
  else gx = 1;
  if(find(v.begin(), v.end(), y) != v.end()) gy = 2;
  else if(y == 2) gy = 3;
  else gy = 1;
  cout << (gx == gy ? "Yes" : "No") << endl;
}

