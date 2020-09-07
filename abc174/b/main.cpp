#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N, D;
  cin >> N >> D;
  vector<int> x(N), y(N);
  rep(i, N) cin >> x[i] >> y[i];
  int ans = 0;
  rep(i, N){
    if(sqrt(pow(x[i], 2) + pow(y[i], 2)) <= D) ++ans;
  }
  cout << ans << endl;
}
