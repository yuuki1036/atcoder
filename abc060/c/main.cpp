#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, t;
  cin >> n >> t;
  int A[n];
  for(int i=0; i<n; ++i) cin >> A[i];
  long long ans = t;
  for(int i=1; i<n; ++i){
    int b = A[i]-A[i-1];
    ans += b < t ? b : t;
  }
  cout << ans << endl;
}