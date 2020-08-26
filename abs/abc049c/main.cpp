#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  int l = s.size();
  string a[4] = {"dream","dreamer","erase","eraser"};
  for(int i=0; i<4; ++i) reverse(a[i].begin(), a[i].end());
  for(int i=0; i<l;){
    bool ok = false;
    for(string t : a){
      if(s.substr(i, t.size()) == t){
        ok = true;
        i += t.size();
        break;
      }
    }
    if(!ok){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}