#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  string A[n];
  string B[m];
  for(int i=0; i<n; ++i) cin >> A[i];
  for(int i=0; i<m; ++i) cin >> B[i];
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      bool judge = true;
      for(int k=0; k<m; ++k){
        for(int l=0; l<m; ++l){
          if(!(i+k < n && j+l < n && A[i+k][j+l] == B[k][l])) judge = false;
        }
      }
      if(judge){ cout << "Yes" << endl; return 0; }
    }
  }
  cout << "No" << endl;
}