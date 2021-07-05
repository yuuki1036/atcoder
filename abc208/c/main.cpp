#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll n, k;
  cin >> n >> k;
  vector<ll>A(n);
  vector<ll>B(n);
  for(int i=0; i<n; ++i) cin >> A[i];
  B = A;
  sort(A.begin(), A.end());
  ll all = k/n;
  k = k%n;
  if (k == 0){
    for(int i=0; i<n; ++i) cout << all << endl;
  } else {
    ll lastNo = A[k-1];
    for(int i=0; i<n; ++i) cout << (B[i] <= lastNo ? all+1 : all) << endl;
  }
}