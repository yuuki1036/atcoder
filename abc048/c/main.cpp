#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, x;
  cin >> n >> x;
  int a[n];
  for(int i=0; i<n; ++i) cin >> a[i];
  long long res = 0;
  if(a[0] > x){
    res += a[0]-x;
    a[0] = x;
  }
  for(int i=0; i<n-1; ++i){
    int sum = a[i]+a[i+1];
    if(sum > x){
      res += sum-x;
      a[i+1] -= sum-x;
    }
  }
  cout << res << endl;
}