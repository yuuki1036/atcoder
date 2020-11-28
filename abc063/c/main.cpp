#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int s[n];
  int ans = 0;
  for(int i=0; i<n; ++i) cin >> s[i];
  for(int bit=0; bit<(1<<n); ++bit){
    int res = 0;
    for(int i=0; i<n; ++i){
      if(bit & (1<<i)) res += s[i];
    }
    if(res%10 != 0) ans = max(ans, res);
  }
  n = 100;
  long long w = (1 << 100);
  cout<<w<<endl;
  for(long long i=0; i<(1<<n); ++i) cout<<i<<endl;
}