#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[n*3];
  for(int i=0; i<n*3; ++i) cin >> a[i];
  sort(a, a+(n*3), greater<int>());
  long long ans = 0;
  for(int i=1; i<n*2; i+=2) ans += a[i];
  cout << ans << endl;
}