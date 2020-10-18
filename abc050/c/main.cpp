#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main(){
  int n, a;
  cin >> n;
  if(n == 1){ cout << 1 << endl; return 0; }
  vector<int> s(n);
  for(int i=0; i<n; ++i){
    cin >> a;
    ++s[a];
    if(n%2 == 0){
      if(a%2 == 0){ cout << 0 << endl; return 0; }
    }else{
      if(a%2 != 0){ cout << 0 << endl; return 0; }
    }
    if(s[0] > 1 || s[a] > 2){ cout << 0 << endl; return 0; }
  }
  ll res = 2;
  int pow = n/2-1;
  while(pow--) res = (res*2)%MOD;
  cout << res << endl;
}