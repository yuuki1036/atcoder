#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  --n;
  long long ans = 0;
  for(int i=1; i<=n; ++i) ans += n/i;
  cout << ans << endl;
}