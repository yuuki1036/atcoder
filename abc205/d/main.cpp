#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n, q;
  cin >> n >> q;
  ll A[n];
  for(int i=0; i<n; ++i) cin >> A[i];
  ll B[n];
  for(int i=0; i<n; ++i){
    if(i == 0) B[i] = A[i]-1;
    else B[i] = A[i+1]-A[i]-1;
    cout << B[i]<<endl;
  }
  for(int i=0; i<q; ++i){
    ll k;
    cin >> k;
    ll now = 0;
    for(int j=0; j<n; ++j){
      now += B[j];
      if(k > now) continue;
      if (k == now){
        if(j == 0) cout << now << endl;
        else cout << A[j]+B[j] << endl;
      }
      if (k < now){
        if(j == 0) cout << k << endl;
        else cout << A[j]+now-B[j] << endl;
      }
    }
    if (k > now) cout << A[n]+(k-now) << endl;
  }
}