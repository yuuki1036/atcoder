#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  map<int,int> A;
  for(int i=0; i<n; ++i) A[i+1] = 0;
  for(int i=0; i<n; ++i){
    int a;
    cin >> a;
    if (A[a] == 0) ++A[a];
  }
  for(auto& [k, v] : A){
    if (v != 1){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}