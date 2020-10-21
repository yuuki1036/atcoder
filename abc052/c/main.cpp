#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
using ll = long long;
int main(){
  int n;
  cin >> n;
  ll cnt[1005] = {0}, ans = 1;
  for(int i=2; i<=n; ++i){
    int now = i;
    for(int j=2; j<=now; ++j){
      while(now > 0 && now%j == 0){
        ++cnt[j];
        now /= j;
      }
    }
  }
  for(int i=0; i<=n; ++i){
    if(cnt[i] != 0){
      ans *= cnt[i]+1;
      ans %= MOD;
    }
  }
  cout << ans << endl;
}