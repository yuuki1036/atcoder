#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  int ans = ((1900*m)+100*(n-m))*pow(2, m);
  cout << ans << endl;
}