#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  if(n < 2){ cout << 0 << endl; return 0;}
  int a[n];
  for(int i=0; i<n; ++i) cin >> a[i];
  long long ans = 0;
  for(int i=1; i<n; ++i){
    int d = a[i-1] - a[i];
    if(d > 0){
      ans += d;
      a[i] += d;
    }
  }
  cout << ans << endl;
}