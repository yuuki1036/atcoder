#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<tuple<int, int, int>> V(n);
  for(auto& [t, x, y] : V) cin >> t >> x >> y;
  V.insert(V.begin(), make_tuple(0, 0, 0));
  for(int i=0; i<n; ++i){
    auto [t1, x1, y1] = V[i];
    auto [t2, x2, y2] = V[i+1];
    int p = t2-t1;
    if(!(abs(x2-x1)+abs(y2-y1) <= p && abs(x2+y2)%2 == t2%2)){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}