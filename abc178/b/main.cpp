#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll ac = a*c;
  ll ad = a*d;
  ll bc = b*c;
  ll bd = b*d;
  ll ans = max(ac, ad);
  ans = max(ans, bc);
  ans = max(ans, bd);
  cout << ans << endl;
}