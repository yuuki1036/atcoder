#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, k, x, y;
  cin >> n >> k >> x >> y;
  int ans = 0, now = 1;
  while(n--){
    if(now > k) ans += y;
    else ans += x;
    ++now;
  }
  cout << ans << endl;
}