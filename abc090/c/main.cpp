#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ll n, m, ans;
  cin >> n >> m;
  if (n == 1 && m == 1)
    ans = 1;
  else if (n == 1 && m != 1)
    ans = m - 2;
  else if (n != 1 && m == 1)
    ans = n - 2;
  else
    ans = (n - 2) * (m - 2);
  cout << ans << endl;
}