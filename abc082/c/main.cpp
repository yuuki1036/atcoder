#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  map<ll, ll> m;
  for(int i=0; i<n; ++i){
    ll tmp;
    cin >> tmp;
    if(m.find(tmp) != m.end()) ++m[tmp];
    else m[tmp] = 1;
  }
  int ans = 0;
  for(auto& [k, v] : m){
    if(k < v) ans += v-k;
    else if(k > v) ans += v;
  }
  cout << ans <<endl;
}