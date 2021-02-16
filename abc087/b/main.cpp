#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int ans = 0;
  for(int i=0; i<=a; ++i){
    for(int j=0; i<=b; ++j){
      for(int k=0; k<=c; ++k){
        if(500*a+100*b+50*c == x) ++ans;
      }
    }
  }
  cout << ans;
}