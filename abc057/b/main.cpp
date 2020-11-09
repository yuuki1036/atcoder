#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> S(n);
  vector<pair<int, int>> C(m);
  for(auto& [x, y] : S) cin >> x >> y;
  for(auto& [x, y] : C) cin >> x >> y;
  for(int i=0; i<n; ++i){
    auto [x1, y1] = S[i];
    int res = 0, length = 1e9;
    for(int j=0; j<m; ++j){
      auto [x2, y2] = C[j];
      int now = abs(x1-x2) + abs(y1-y2);
      if(length > now){
        length = now;
        res = j+1;
      }
    }
    cout << res << endl;
  }
}