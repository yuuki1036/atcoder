#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll x, a, b;
  cin >> x >> a >> b;
  string ans = "delicious";
  if(a < b){
    ans = a+x < b ? "dangerous" : "safe";
  }
  cout << ans <<endl;
}
