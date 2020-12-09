#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  int l = s.size()/2-1;
  int ans = 0;
  for(int i=1; i<=l; ++i){
    string l = s.substr(0, i), r = s.substr(i, i);
    if(l == r) ans = max(ans, i*2);
  }
  cout << ans << endl;
}