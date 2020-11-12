#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  string S[n];
  for(int i=0; i<n; ++i) cin >> S[i];
  vector<int> a(26, 100);
  for(int i=0; i<n; ++i){
    map<char, int> M;
    for(int j=0; j<S[i].length(); ++j) ++M[S[i][j]];
    for(int k=0; k<26; ++k) a[k] = min(a[k], M['a'+k]);
  }
  string ans = "";
  for(int i=0; i<26; ++i){
    string temp(a[i], 'a'+i);
    ans += temp;
  }
  cout << ans << endl;
}