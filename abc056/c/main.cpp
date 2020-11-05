#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll n;
  cin >> n;
  ll now = 1, res = 1;
  while(now < n){
    ++res;
    now += res;
  }
  cout << res << endl;
}