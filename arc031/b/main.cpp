#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void fillIsland(vector<vector <char>> &M, vector<vector <bool>> &B, int y, int x){
  if(y < 0 || y >= 10 || x < 0 || x >= 10) return;
  if(M[y][x] == 'x') return;
  if(B[y][x]) return;
  B[y][x] = true;
  fillIsland(M, B, y - 1, x    );
  fillIsland(M, B, y,     x + 1);
  fillIsland(M, B, y + 1, x    );
  fillIsland(M, B, y,     x - 1);
}

bool check(vector<vector <char>> &M){
  vector<vector <bool>> B(10, vector<bool>(10, false));
  int y, x;
  rep(i, 10){
    rep(j, 10){
      if(M[i][j] == 'o'){
        y = i;
        x = j;
        break;
      }
    }
  }

  fillIsland(M, B, y, x);

  rep(i, 10){
    rep(j, 10){
      if(M[i][j] == 'o' && !B[i][j]) return false;
    }
  }
  return true;
}

int main(){
  vector<vector <char>> M(10, vector<char>(10));
  rep(i, 10){
    rep(j, 10){
      cin >> M[i][j];
    }
  }


  rep(i, 10){
    rep(j, 10){
      if(M[i][j] == 'o') continue;
      M[i][j] = 'o';
      if(check(M)){
        cout << "YES" << endl;
        return 0;
      }
      M[i][j] = 'x';
    }
  }
  cout << "NO" << endl;
}
