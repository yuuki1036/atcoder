#include <bits/stdc++.h>
using namespace std;
int main(){
  int v, t, s, d;
  cin >> v >> t >> s >> d;
  cout << (v*t > d || v*s < d ? "Yes" : "No") << endl;
}