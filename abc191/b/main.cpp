#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, x;
  cin >> n >> x;
  vector<int>A;
  for(int i=0; i<n; ++i){
    int tmp;
    cin >> tmp;
    if (tmp != x) A.push_back(tmp);
  }
  int s = A.size();
  for(int i=0; i<s; ++i){
    cout << A[i];
    if(i+1 < s) cout << " ";
  }
  cout << endl;
}