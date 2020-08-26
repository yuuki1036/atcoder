#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  cin >> N;
  int O[N];
  rep(i, N) cin >> O[i];
  int ans = 1e9;
  for(int mask = 0; mask < (1<<N); ++mask){
    int a = 0, b = 0, res = 0;
    for(int i = 0; i < N; ++i){
      if(mask >> i & 1){
        a += O[i];
      }else{
        b += O[i];
      }
    }
    res = max(a, b);
    if(res < ans) ans = res;
  }
  cout << ans << endl;



}
