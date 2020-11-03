#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  int a, b;
  ll res = 0;
  for(int i=0; i<n; ++i){
    cin >> a >> b;
    ll k = b-a+1;
    res += k*(a+b)/2;
  }
  cout << res << endl;
}