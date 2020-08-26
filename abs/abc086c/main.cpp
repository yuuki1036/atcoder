#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int t[110000], x[110000], y[110000];
  t[0] = x[0] = y[0] = 0;
  for(int i=1; i<=n; ++i) cin >> t[i] >> x[i] >> y[i];
  for(int i=0; i<n; ++i){
    int dt = t[i+1]-t[i];
    int dist = abs(x[i+1]-x[i])+abs(y[i+1]-y[i]);
    if(dist>dt || dist%2 != dt%2){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}