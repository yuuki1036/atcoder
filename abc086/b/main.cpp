#include <bits/stdc++.h>
using namespace std;
int main(){
  string a, b;
  cin >> a >> b;
  int x = stoi(a+b);
  int s = floor(sqrt(x));
  cout << (s*s == x ? "Yes" : "No") << endl;
}