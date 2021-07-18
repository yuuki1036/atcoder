#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, a, x, y;
  cin >> n >> a >> x >> y;
  int ans = 0;
  if (n <= a) ans = n*x;
  else ans = (n-a)*y+a*x;
  cout << ans << endl;
}