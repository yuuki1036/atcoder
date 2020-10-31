#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll n, m;
  cin >> n >> m;
  ll res = 0;
  ll need = n*2;
  if (m < need) res = m/2;
  else res = n+((m-need)/4);
  cout << res << endl;
}