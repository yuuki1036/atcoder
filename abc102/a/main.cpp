#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  long long ans = n;
  if (n % 2 != 0)
  {
    ans = n * 2;
  }
  cout << ans << endl;
}