#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  string S;
  cin >> S;
  if(n == 0){
    cout << "Takahashi" << endl;
    return 0;
  }
    for(int i=0; i<S.length(); ++i){
      if(S[i] == '1'){
        if(i%2 == 0) cout << "Takahashi" << endl;
        else cout << "Aoki" << endl;
        return 0;
      }
    }



}