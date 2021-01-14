#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int f[n][10], p[n][11];
  for(int i=0; i<n; ++i){
    for(int j=0; j<10; ++j) cin >>f[i][j];
  }
  for(int i=0; i<n; ++i){
    for(int j=0; j<=10; ++j) cin >>p[i][j];
  }
  int ans = -1e9;
  for(int bit=1; bit<(1<<10); ++bit){
    int sum = 0;
    for(int i=0; i<n; ++i){
      int both = 0;
      for(int j=0; j<10; ++j) if((bit & (1<<j)) && f[i][j] == 1) ++both;
      sum += p[i][both];
    }
    ans = max(ans, sum);
  }
  cout << ans << endl;
}