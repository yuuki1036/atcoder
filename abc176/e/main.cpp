#include <bits/stdc++.h>
using namespace std;
int main(){
  int H, W, M;
  cin >> H >> W >> M;
  int c[W], r[H], mr = 0, mc = 0;
  for(int i=0; i<M; ++i){
    int h, w;
    cin >> h >> w;
    r[h-1] += 1;
    c[w-1] += 1;
    mr = max(mr, r[h-1]);
    mc = max(mc, c[w-1]);
  }
  



}