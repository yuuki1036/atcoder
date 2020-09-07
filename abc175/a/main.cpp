#include <bits/stdc++.h>
using namespace std;
int main(){
  string S;
  cin >> S;
  int ans = 0, tmp = 0;
  for(int i=0; i<3; ++i){
    if(S[i] == 'R') ++tmp;
    else tmp = 0;
    ans = max(ans, tmp);
  }
  cout << ans << endl;
}
