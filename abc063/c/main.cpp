#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int s[n];
  int ans = 0;
  for(int i=0; i<n; ++i){
    cin >> s[i];
    ans += s[i];
  }
  if(ans%10 != 0){ cout << ans << endl; return 0; }
  sort(s, s+n);
  for(int i=0; i<n; i++){
    if(s[i]%10 != 0){
      ans -= s[i];
      cout << ans << endl;
      return 0;
    }
  }
  cout << 0 << endl;
}