#include <bits/stdc++.h>
using namespace std;
int main(){
  int x, y, z;
  cin >> x >> y >> z;
  x -= (y+(z*2));
  int add = y+z, ans = 1;
  while(x-add >= 0){
    x -= add;
    ++ans;
  }
  cout << ans << endl;
}