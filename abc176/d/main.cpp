#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

int main(){
  int h, w, sx, sy, ex, ey;
  cin >> h >> w >> sx >> sy >> ex >> ey;
  sx--; sy--; ex--; ey--;

  string m[h];
  for(int i=0; i<h; ++i) cin >> m[i];

  int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
  int cx, cy;

  int v[h][w];
  for(int i=0; i<h; ++i){
    for(int j=0; j<w; ++j) v[i][j] = -1;
  }
  v[sx][sy] = 0;

  queue<P> q, r;
  q.push(P(sx, sy));

  while(!q.empty() || !r.empty()){
    if(!q.empty()) {
      P p = q.front();
      q.pop();
      cx = p.first; cy = p.second;
      r.push(P(cx, cy));
      for(int i=0; i<4; ++i){
        int nx = cx+dx[i], ny = cy+dy[i];
        if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if(m[nx][ny] == '#') continue;  
        if(v[nx][ny] == -1){
          q.push(P(nx, ny));
          v[nx][ny] = v[cx][cy];
        }
      }
    }else{
      P p = r.front();
      r.pop();
      cx = p.first; cy = p.second;
      for(int wx = cx-2; wx<cx+3; ++wx){
        for(int wy = cy-2; wy<cy+3; ++wy){
          if(wx < 0 || wx >= h || wy < 0 || wy >= w) continue;
          if(m[wx][wy] == '#') continue;  
          if(v[wx][wy] == -1 || v[wx][wy] > v[cx][cy]+1){
            q.push(P(wx, wy));
            v[wx][wy] = v[cx][cy]+1;
          }
        }
      }
    }
  }
  cout << v[ex][ey] << endl;
}