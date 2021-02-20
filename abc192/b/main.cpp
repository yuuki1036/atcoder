#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  int l = s.size();
  for(int i=0; i<l; ++i){
    int ask = s[i]+0;
    if(i%2 == 0){
      if(!(ask >= 97 && ask <= 122)){
        cout << "No" << endl;
        return 0;
      }
    }else{
      if(!(ask >= 65 && ask <= 90)){
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}