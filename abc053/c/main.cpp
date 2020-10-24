#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll x;
  cin >> x;
  ll ans = x/11*2;
  int remain = x%11;
  if(remain > 6) ans += 2;
  else if(remain <= 6 && remain > 0) ++ans;
  cout << ans << endl;
}