#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string S;
  cin >> n >> S;
  string ans = "";
  for(int i=0; i<S.length(); ++i){
    if(S[i] == '1'){
      if(i%2 == 0) ans = "Takahashi";
      else ans = "Aoki";
      break;
    }
  }
  cout << ans << endl;
}