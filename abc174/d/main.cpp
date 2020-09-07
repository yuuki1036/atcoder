#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int a = 0, b = 0;
  rep(i, N) if(S[i] == 'R') ++a;
  int ans = max(a, b);
  rep(i, N){
    if(S[i] == 'R') --a;
    else ++b;
    int now = max(a, b);
    ans = min(ans, now);
  }
  cout << ans << endl;
}
