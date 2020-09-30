#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, z = 0;
  cin >> n;
  while(n--){
    int a, b;
    cin >> a >> b;
    if(a == b){
      z += 1;
      if(z == 3){
        cout << "Yes" << endl;
        return 0;
      }
    }else{
      z = 0;
    }
  }
  cout << "No" << endl;
}