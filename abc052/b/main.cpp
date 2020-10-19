#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int res = 0, now = 0;
  for(int i=0; i<n; ++i){
    if(s[i] == 'I') ++now; 
    else --now;
    res = max(res, now);
  }
  cout << res << endl;
}