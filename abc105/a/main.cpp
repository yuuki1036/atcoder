#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, k;
  cin >> n >> k;
  int ans = 1;
  if(n>=k && n%k == 0 ) ans = 0;
  cout << ans << endl;
}