#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<vector<ll>> V(n, vector<ll>(3));
  for(int i=0; i<n; ++i) cin >> V[i][0] >> V[i][1] >> V[i][2];
  ll ans = 0;
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      if (i == j) continue;
      int x = V[i][1] <= V[j][1] ? i : j;
      int y = x == i ? j : i;
      if (V[x][2] > V[y][1]) ++ans;
      else if (V[x][2] == V[y][1]){
        if((V[x][0] == 1 || V[x][0] == 3) && (V[y][0] == 1 || V[y][0] == 2)) ++ans;
      }
    }
  }
  cout << ans/2 << endl;
}