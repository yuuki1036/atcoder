#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void view(vector<vector<ll>> vv){
  for(size_t i=0; i<vv.size(); i++){
    for(size_t j=0; j<vv[i].size(); j++){
      cout << vv[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
  ll h, w, c;
  cin >> h >> w >> c;
  vector<vector<ll>>M(h, vector<ll>(w));
  for(int i=0; i<h; ++i) for(int j=0; j<w; ++j) cin >> M[i][j];
  view(M);
  ll ans = 0;
  for(int i=0; i<h; ++i){
    for(int j=0; j<w; ++j){
      
    }
  }


}