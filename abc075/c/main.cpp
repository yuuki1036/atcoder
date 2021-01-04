#include <bits/stdc++.h>
using namespace std;
const int lim = 50;
int n, m;
int a[lim], b[lim];
bool g[lim][lim];
bool v[lim];

void dfs(int x){
  v[x] = true;
  for(int nx=0; nx<n; ++nx){
    if(v[nx]) continue;
    if(!g[x][nx]) continue;
    dfs(nx);
  }
}

int main(){
  cin >> n >> m;
  for(int i=0; i<m; ++i){
    cin >> a[i] >> b[i];
    --a[i], --b[i];
    g[a[i]][b[i]] = g[b[i]][a[i]] = true;
  }
  int ans = 0;
  for(int i=0; i<m; ++i){
    g[a[i]][b[i]] = g[b[i]][a[i]] = false;
    for(int j=0; j<n; ++j) v[j] = false;
    dfs(0);
    bool bridge = false;
    for(int j=0; j<n; ++j) if(!v[j]) bridge = true;
    if(bridge) ++ans;
    g[a[i]][b[i]] = g[b[i]][a[i]] = true;
  }
  cout << ans << endl;
}
