#include <bits/stdc++.h>
using namespace std;
int f(int x){
  int res = 0;
  while(x > 0){
    res += x;
    --x;
  }
  return res;
}

int main(){
  int N;
  cin >> N;
  if(N < 3){
    cout << 0 << endl;
    return 0;
  }
  int L[N];
  for(int i=0; i<N; ++i) cin >> L[i];
  int cnt = 0;
  for(int i=0; i<N; ++i){
    for(int j=i+1; j<N; ++j){
      for(int k=j+1; k<N; ++k){
        set<int>s;
        s.insert(L[i]);
        s.insert(L[j]);
        s.insert(L[k]);
        if(s.size() == 3 && L[i] + L[j] > L[k] && L[j] + L[k] > L[i] && L[k] + L[i] > L[j]){
          ++cnt;
        }
      }
    }
  }
  cout << cnt << endl;
}