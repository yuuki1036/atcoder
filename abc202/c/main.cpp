#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  string A = "";
  char c;
  int l;
  long long ans = 0;
  map<int, int> m;
  map<int, int> o;
  for (int i = 0; i < n; ++i)
  {
    cin >> l;
    if (o.find(l) != o.end())
    {
      ++o[l];
    }
    else
    {
      o[l] = 1;
    }
  }
  for (int i = 0; i < n; ++i)
  {
    cin >> l;
    if (o.find(l) != o.end())
    {
      if (m.find(i) != m.end())
      {
        m[i] += o[l];
      }
      else
      {
        m[i] = o[l];
      }
    }
  }
  for (int i = 0; i < n; ++i)
  {
    cin >> l;
    --l;
    if (m.find(l) != m.end())
    {
      ans += m[l];
    }
  }
  cout << ans << endl;
}