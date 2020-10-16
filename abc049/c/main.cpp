#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  vector<string> a{"dream", "dreamer", "erase", "eraser"};
  string res = "NO";
  int size = s.size()-1;
  for(int i=size; i>=0; --i){
    if(find(a.begin(), a.end(), s.substr(i)) != a.end()){
      s.replace(i, s.size(), "");
    }
  }
  if(s.size() > 0) cout << "NO" << endl;
  else cout << "YES" << endl;
}