#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
int main(){
  int n, x, y;
  cin >> n;
  vector<P> a(n);
  for(int i=0; i<n; ++i){
    cin >> x >> y;
    a[i] = P(x, y);
  }
  double ans = 0;
  for(int i=0; i<n-1; ++i){
    for(int j=i+1; j<n; ++j){
      int x1 = a[i].first, y1 = a[i].second;
      int x2 = a[j].first, y2 = a[j].second;
      double len = sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
      ans = max(ans, len);
    }
  }
  cout << ans << endl;
}
