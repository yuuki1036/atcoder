#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, k;
  cin >> n >> k;
  int a[n];
  for(int i=0; i<n; ++i) cin >> a[i];
  map<int, int> C;
  for(int i=0; i<k; ++i) C[a[i]]++;
  int ans = C.size();
  for(int r=k; r<n; ++r){
    C[a[r]]++;
    C[a[r-k]]--;
    if(C[a[r-k]] == 0) C.erase(a[r-k]);
    ans = max(ans, (int)C.size());
  }
  cout << ans << endl;
}