#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int K;
  cin >> K;
  int x = 7 % K;
  set<int> s;
  long long ans = 1;
  while(s.count(x) == 0){
    if(x == 0){
      cout << ans << endl;
      return 0;
    }
    s.insert(x);
    x = (x * 10 + 7) % K;
    ++ans;
  }
  cout << -1 << endl;
}
