#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  string s;
  map<string, int>M;
  cin >> n;
  for(int i=0; i<n; ++i){
    cin >> s;
    ++M[s];
  }
  cin >> m;
  for(int i=0; i<m; ++i){
    cin >> s;
    --M[s];
  }
  int ans = 0;
  for(auto [k, v] : M) ans = max(ans, v);
  cout << ans << endl;
}
