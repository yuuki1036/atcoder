#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void walk(int h, int w, vector<vector<char>> &M, vector<vector<bool>> &B, int y, int x){
  if(y < 0 || y >= h || x < 0 || x >= w) return;
  if(M[y][x] == '#') return;
  if(B[y][x]) return;
  B[y][x] = true;
  walk(h, w, M, B, y - 1, x); 
  walk(h, w, M, B, y,     x + 1); 
  walk(h, w, M, B, y + 1, x); 
  walk(h, w, M, B, y,     x - 1); 
}

int main(){
  int h, w;
  cin >> h >> w;
  vector<vector<char>> M(h, vector<char>(w));
  rep(i, h){
    rep(j, w){
      cin >> M[i][j];
    }
  }

  vector<vector <bool>> B(h, vector<bool>(w, false));
  int y, x, yg, xg;
  rep(i, h){
    rep(j, w){
      if(M[i][j] == 's'){
        y = i;
        x = j;
      }else if(M[i][j] == 'g'){
        yg = i;
        xg = j;
      }
    }
  }

  walk(h, w, M, B, y, x);

  if(B[yg][xg]){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
