#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  vector<int> a(100);
  for(int i=0; i<s.size(); ++i) ++a[s[i]-'0'];
  for(int i=0; i<=100; ++i){
    if(a[i]%2 != 0){ cout << "No" << endl; return 0; }
  }
  cout << "Yes" << endl;
}