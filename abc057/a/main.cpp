#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  while(b--){
    ++a;
    if(a == 24) a = 0;
  }
  cout << a << endl;
}