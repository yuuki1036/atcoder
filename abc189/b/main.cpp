#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll n, x;
  cin >> n >> x;
  x *= 100;
  ll sum = 0;
  for(int i=0; i<n; ++i){
    ll v, p;
    cin >> v >> p;
    sum += v*p;
    if(sum > x){
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}