#include <bits/stdc++.h>
using namespace std;
int main(){
  string S;
  cin >> S;
  int ans = 0;
  for(auto s : S) if(s == '1') ++ans;
  cout << ans << endl;
}