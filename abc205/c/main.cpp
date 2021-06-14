#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll a, b, c;
  cin >> a >> b >> c;
  if(c%2 == 0){
    if (abs(a) > abs(b)) cout << ">" << endl;
    else if (abs(a) == abs(b)) cout << "=" << endl;
    else cout << "<" << endl;
  } else {
    if(a > b) cout << ">" << endl;
    else if(a == b) cout << "=" << endl;
    else cout << "<" << endl;
  }
}