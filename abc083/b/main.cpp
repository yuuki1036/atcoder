#include <bits/stdc++.h>
using namespace std;

int solve(int x){
  int res = 0;
  while(x >= 1){
    res += x%10;
    x /= 10;
  }
  return res;
}
int main(){
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  for(int i=1; i<=n; ++i){
    int sum = solve(i);
    if(sum >= a && sum <= b) ans += i;
  }
  cout << ans << endl;
}