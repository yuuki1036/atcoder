#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  int res = 0;
  char now = s[0];
  for(int i=0; i<s.size(); ++i){
    if(s[i] != now){ ++res; now = s[i]; }
  }
  cout << res << endl;
}