#include <bits/stdc++.h>
using namespace std;
int main(){
  string a, b, c;
  cin >> a >> b >> c;
  int al = a.size(), bl = b.size(), cl = c.size();
  cout << (a[al-1] == b[0] && b[bl-1] == c[0] ? "YES" : "NO") << endl;
}