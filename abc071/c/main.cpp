#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  map<ll, int> M;
  vector<ll>V;
  for(int i=0; i<n; ++i){
    ll tmp;
    cin >> tmp;
    if(M.find(tmp) != M.end()){
      if(M[tmp] == 1){
        V.push_back(tmp);
        M[tmp] = 0;
      }else{
        ++M[tmp];
      }
    }else{
      M[tmp] = 1;
    }
  }
  if(V.size() > 1){
    sort(V.begin(), V.end(), greater<ll>());
    cout << V[0]*V[1] << endl;
  }else{
    cout << 0 << endl;
  }
}