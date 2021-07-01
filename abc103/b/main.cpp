#include <bits/stdc++.h>
using namespace std;
int main(){
  string S, T;
  cin >> S >> T;
  int l = S.length();
  for(int i=0; i<l; ++i){
    if (S == T) {
      cout << "Yes" << endl;
      return 0;
    }
    char e = S.at(l-1);
    S.pop_back();
    S = e + S;
  }
  cout << "No" << endl;
}