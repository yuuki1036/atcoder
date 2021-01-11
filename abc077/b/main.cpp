#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll n;
  cin >> n;
  ll now = 1, ans = 1;
  while(true){
    ll tmp = now*now;
    if(tmp > n) break;
    ans = tmp;
    ++now;
  }
  cout << ans << endl;
}