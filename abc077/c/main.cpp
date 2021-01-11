#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<int> A(n), B(n), C(n);
  for(int i=0; i<n; ++i) cin >> A[i];
  for(int i=0; i<n; ++i) cin >> B[i];
  for(int i=0; i<n; ++i) cin >> C[i];
  sort(A.begin(), A.end()), sort(C.begin(), C.end());
  ll ans = 0;
  for(int i=0; i<n; ++i){
    auto it1 = lower_bound(A.begin(), A.end(), B[i]);
    auto it2 = upper_bound(C.begin(), C.end(), B[i]);
    ans += ((it1 - A.begin())*(C.end() - it2));
  }
  cout << ans << endl;
}