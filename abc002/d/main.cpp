#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
int main(){
  int N, M;
  cin >> N >> M;
  vector<int> k1(M), k2(M);
  rep(i, M) cin >> k1[i] >> k2[i];
  int ans = 0;
  for(int mask = 0; mask < (1<<N); ++mask){
    int h = 0;
    bool ok = true;
    for(int i = 0; i < M; ++i){
      if((mask >> (k1[i] - 1) & 0) || (mask >> (k2[i] - 1) & 0)){
        ok = false;
        break;
      }
    }
    if(ok){
      for(int i = 0; i < N; ++i){
        if(mask >> i & 1) ++h;
      }
      ans = max(ans, h);
    }
  }
  cout << ans << endl;



}
