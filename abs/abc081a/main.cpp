#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
int main(){
  string s;
  cin >> s;
  int c = 0;
  rep(i, 3) if(s[i] == '1') ++c;
  cout << c << endl;
}
