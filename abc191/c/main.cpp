#include <bits/stdc++.h>
using namespace std;
int main(){
  int H, W;
  cin >> H >> W;
  string M[H];
  string C[H];
  for(int i=0; i<H; ++i){
    string tmp;
    cin >> tmp;
    M[i] = tmp;
    C[i] = tmp;
  }
  int si, sj;
  bool f = false;
  for(int i=0; i<H; ++i){
    for(int j=0; j<W; ++j){
      if (M[i][j] == '#'){
        si = i;
        sj = j-1;
        f = true;
        break;
      }
    }
    if(f) break;
  }
  cout << si << " " << sj << endl;

  int ni = si;
  int nj = sj;
  const vector<int> p{-1, 0, 1};
  for(int i=0; i<3; ++i){
    for(int j=0; j<3; ++j){
      int vi = ni+p[i];
      int vj = nj+p[j];
      if(vi < 0 || vi >= H || vj < 0 || vj >=W){
        continue;
      }
      cout <<"vi="<<vi <<" vj="<< vj << endl;
    }
  }

}