#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m, x, tmp;
  cin >> n >> m >> x;
  vector<int>V(n+1, 0);
  for(int i=0; i<m; ++i){
    cin >> tmp;
    ++V[tmp];
  }
  int l = accumulate(V.begin(), V.begin()+x, 0);
  int r = accumulate(V.begin()+x, V.end(), 0);
  cout << min(l, r) << endl;
}