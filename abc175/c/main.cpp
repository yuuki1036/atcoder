#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll X, K, D;
  cin >> X >> K >> D;
  X = abs(X);
  ll stop = min(K, X/D);
  K -= stop;
  X -= D*stop;
  ll ans = K%2 == 0 ? X : D-X;
  cout << ans << endl;
}