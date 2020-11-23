#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  set<char> C;
  string ans = "yes";
  for(int i=0; i<s.size(); ++i){
    if(C.find(s[i]) != C.end()) ans = "no";
    else C.insert(s[i]);
  }
  cout << ans << endl;
}