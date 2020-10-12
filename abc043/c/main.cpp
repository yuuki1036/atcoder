#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[n];
  for (int i=0; i<n; ++i) cin >> a[i];
  int ans = 1e9;
  for(int rep=-100; rep<=100; ++rep){
    int cst = 0;
    for(int i=0; i<n; ++i){
      if(a[i] == rep) continue;
      cst += pow(a[i]-rep, 2);
    }
    ans = min(ans, cst);
  }
  cout << ans << endl;
}