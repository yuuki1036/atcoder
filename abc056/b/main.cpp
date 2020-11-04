#include <bits/stdc++.h>
using namespace std;
int main(){
  int w, a, b;
  cin >> w >> a >> b;
  int res = 0;
  if(a < b){
    if(a+w < b) res = b-a-w;
  }else if(a > b){
    if(b+w < a) res = a-b-w;
  }
  cout << res << endl;
}