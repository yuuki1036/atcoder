#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  if(s[s.size()-1] == 's') s.push_back('e');
  s.push_back('s');
  cout << s << endl;
}