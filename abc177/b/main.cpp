#include <bits/stdc++.h>
using namespace std;
int main(){
  string s, t;
  cin >> s >> t;
  int ls = s.size(), lt = t.size();
  int ans = lt;
  for(int i=0; i<ls-lt+1; ++i){
    int sub = lt;
    for(int j=0; j<lt; ++j){
      if(s[i+j] == t[j]) --sub;
    }
    ans = min(ans, sub);
  }
  cout << ans << endl; 
}