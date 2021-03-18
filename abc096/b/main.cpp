#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int mx = max(max(a, b), c);
  ll twice = mx;
  for(int i=0; i<k; ++i) twice *= 2;
  cout << twice+a+b+c-mx << endl;
}