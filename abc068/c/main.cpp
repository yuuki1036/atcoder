#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> p(m);
  set<int> s;
  for(auto& [a, b] : p) cin >> a >> b;
  for(int i=0; i<m; ++i){
    auto [a, b] = p[i];
    if(a == 1) s.insert(b);
  }
  for(int i=0; i<m; ++i){
    auto [a, b] = p[i];
    if(s.find(a) != s.end() && b == n){
      cout << "POSSIBLE" << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
}