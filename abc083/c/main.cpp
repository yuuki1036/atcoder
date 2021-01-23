#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll x, y;
  cin >> x >> y;
  ll ans = 1;
  ll a = x*2;
  while(a <= y){
    a *= 2;
    ++ans;
  }
  cout << ans <<endl;
}