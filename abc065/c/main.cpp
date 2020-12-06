#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
ll f(int x){
  ll res = 1;
  while(x > 0){
    res = res*x%MOD;
    --x;
  }
  return res;
}

int main(){
  int n, m;
  cin >> n >> m;
  ll ans = 0;
  if(n != m && n+1 != m && n != m+1){
    cout << ans << endl;
    return 0;
  }
  ans = f(n)*f(m)%MOD;
  if(n == m) ans = ans*2%MOD;
  cout << ans << endl;
}
