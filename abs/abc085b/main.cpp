#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int>d(n);
  for(int i=0; i<n; ++i) cin >> d[i];
  sort(d.rbegin(), d.rend());
  int cnt = 0, now = 1e9;
  for(int i=0; i<n; ++i){
    if(d[i] < now){
      ++cnt;
      now = d[i];
    }
  }
  cout << cnt << endl;
}