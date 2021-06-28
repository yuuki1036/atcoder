#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  ll ans = 0;
  ll w = a; 
  ll r = 0;
  
  while(true){
    if(w<=r*d){
      cout << ans << endl;
      return 0;
    }
    if (b>=c*d) break;
    w += b;
    r += c;
    ++ans;
  }
  cout << -1 << endl;
}