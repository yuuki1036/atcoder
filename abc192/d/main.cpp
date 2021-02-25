#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string s;
ll m;
int l;
ll solve(ll x){
  ll res = 0;
  for(int i=0; i<l; ++i){
    int num = s[i]-'0';
    res += num*pow(x, i);
    if(res > m) return m+1;
  }
  return res;
}

int main(){
  cin >> s >> m;
  l = s.size();
  int mx = 0;
  for(int i=0; i<l; ++i) mx = max(mx, s[i]-'0');
  ll ans = 0;
  while(true){
    ++mx;
    if(solve(mx) <= m) ++ans;
    else break;
  }
  cout << ans << endl;
}