#include <bits/stdc++.h>
using namespace std;
int main(){
  set<int> S;
  int a, b, c;
  cin >> a >> b >> c;
  S.insert(a);
  S.insert(b);
  S.insert(c);
  cout << S.size() << endl;
}