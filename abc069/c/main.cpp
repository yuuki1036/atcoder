#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a = 0, b = 0, c = 0;
  for(int i=0; i<n; ++i){
    int tmp;
    cin >> tmp;
    if(tmp == 2) ++b;
    else if(tmp%4 == 0) ++a;
    else ++c;
  }
  cout<<a<<" "<<b<<" "<<c<<endl;
}