#include <bits/stdc++.h>
using namespace std;
int main(){
  string S, T;
  cin >> S >> T;
  int Sl = S.size(), Tl = T.size();
  vector<string> results;
  for(int i=0; i<=Sl-Tl; ++i){
    string s = S;
    bool match = true;
    for(int Ti=0, si=i; Ti<Tl; ++Ti, ++si){
      if(s[si] == '?') s[si] = T[Ti];
      else if(s[si] != T[Ti]) match = false;
    }
    if(match){
      replace(s.begin(), s.end(), '?', 'a');
      results.push_back(s);
    }
  }
  if(results.size() != 0){
    sort(results.begin(), results.end());
    cout << results[0] << endl;
  } else {
    cout << "UNRESTORABLE" << endl;
  }
}