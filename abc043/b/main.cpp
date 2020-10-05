#include <bits/stdc++.h>
using namespace std;
int main(){
  string s, ans;
  cin >> s;
  for(int i=0; i<s.size(); ++i){
    if(s[i] == '0') ans += '0';
    else if(s[i] == '1') ans += '1';
    else if(ans.size() > 0) ans.pop_back();
  }
  cout << ans << endl;
}