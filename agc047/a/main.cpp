#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
int main(){
  int N;
  cin >> N;
  vector<long double> A(N);
  rep(i, N) cin >> A[i];
  ll c = 0;
  rep(i, N){
    rep(j, N){
      if(i >= j) continue;
      long double P = A[i]*A[j];
      if(floor(P)==ceil(P)) ++c;
    }
  }
  cout << c << endl;
}
