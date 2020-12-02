#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; ++i) cin >> a[i];
  set<int>s;
  int addColor = 0;
  for(int i=0; i<n; ++i){
    if(a[i] >= 3200) ++addColor;
    else s.insert(a[i]/400);
  }
  int ansMin = s.size() == 0 ? 1 : s.size();
  int ansMax = s.size() + addColor;
  cout << ansMin << " " << ansMax << endl; 
}
