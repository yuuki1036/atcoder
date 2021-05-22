#include <bits/stdc++.h>
using namespace std;
int main()
{
  string S;
  cin >> S;
  reverse(S.begin(), S.end());
  for (char s : S)
  {
    char r = s;
    if (r == '6')
      r = '9';
    else if (r == '9')
      r = '6';
    cout << r;
  }
  cout << endl;
}
