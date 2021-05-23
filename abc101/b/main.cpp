#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  string S = to_string(n);
  int sum = 0;
  for (char s : S)
    sum += s - '0';
  cout << (n % sum == 0 ? "Yes" : "No") << endl;
}