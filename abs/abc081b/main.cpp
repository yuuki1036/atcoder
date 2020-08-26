#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int c = 0;
  while(true){
    rep(i, N){
      if(A[i] % 2 != 0){
        cout << c << endl;
        return 0;
      }
      A[i] /= 2;
    }
    ++c;
  }
}
