#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep (i, N) cin >> A[i];
  int l = 0, r = 1e9;
  while(r - l > 1){
    int x = (r + l) / 2;
    bool solve = [&]{
      long long now = 0;
      rep (i, N) now += (A[i] - 1) / x;
      return now <= K;
    }();
    if(solve) r = x; else l = x; 
  }
  cout << r << endl;
}
