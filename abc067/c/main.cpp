#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  ll A[n];
  ll x = 0, y = 0;
  for(int i=0; i<n; ++i){
    cin >> A[i];
    y += A[i];
  }
  ll ans = LLONG_MAX;
  int sp = n-1;
  for(int i=0; i<sp; ++i){
    x += A[i];
    y -= A[i];
    ll res = abs(x-y);
    ans = min(ans, res);
  }
  cout << ans << endl;
}