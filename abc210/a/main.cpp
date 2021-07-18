#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, a, x, y;
  cin >> n >> a >> x >> y;
  if (n <= a) cout << n*x << endl;
  else cout << ((n-a)*y+(a*x)) << endl;


}