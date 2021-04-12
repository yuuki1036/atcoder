#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  while (true)
  {
    string r = s;
    reverse(r.begin(), r.end());
    if (s == r)
    {
      cout << "Yes" << endl;
      return 0;
    }
    s = "0" + s;
    if (s.length() == 10)
      break;
  }
  cout << "No" << endl;
}