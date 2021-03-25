#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int x;
  cin >> x;
  ll ans = 1;
  for(int i=1; i<=100; ++i){
    for(int j=2; j<=10; ++j){
      long long res = pow(i, j);
      if(res <= x) ans = max(ans, res);
      else break;
    }
  }
  cout << ans << endl;
}