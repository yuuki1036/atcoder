#include <bits/stdc++.h>
using namespace std;
int main(){
  int p;
  cin >> p;
  int x = 1;
  for(int i=1; i<=10; ++i) x *= i;
  int ans = 0;
  for(int i=10; i>=1; --i){
    ans += p/x;
    p %= x;
    x /= i;
  }
  cout << ans << endl;
}