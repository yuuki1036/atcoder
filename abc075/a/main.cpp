#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c, x;
  cin >> a >> b >> c;
  if(a == b) x = c;
  else if(a == c) x = b;
  else x = a;
  cout << x << endl;
}