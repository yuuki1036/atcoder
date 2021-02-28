#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, d, x, a;
  cin >> n >> d >> x;
  int eat = 0;
  for(int i=0; i<n; ++i){
    cin >> a;
    for(int j=0; j<d; ++j){
      int day = a*j+1;
      if(day > d) break;
      ++eat;
    }
  }
  cout << eat+x << endl;
}