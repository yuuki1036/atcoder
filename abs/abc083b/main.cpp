#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;

int f(int x){
  int sum = 0;
  while(x > 0){
    sum += x%10;
    x /= 10;
  }
  return sum;
}

int main(){
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  rep(i, n){
    int sum = f(i);
    if(sum >= a && sum <= b) ans += i;
  }
  cout << ans << endl;
}
