#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m, s;
  cin >> n;
  int t[n];
  int sum = 0;
  for(int i=0; i<n; ++i){ cin >> t[i]; sum += t[i]; }
  cin >> m;
  while(m--){
    int p, x;
    cin >> p >> x;
    s = t[p-1]-x;
    cout << sum-s << endl;
  }
}