#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  int a = 0, b = 0, c = 0;
  for(int i=0; i<n; ++i){
    ll tmp;
    cin >> tmp;
    if(tmp%4 == 0) ++a;
    else if(tmp%2 == 0) ++b;
    else ++c;
  }
  if(b > 0) cout << (a >= c ? "Yes" : "No") << endl;
  else cout << (a+1 >= c ? "Yes" : "No") << endl;
}