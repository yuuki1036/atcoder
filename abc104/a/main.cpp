#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  string ans = "AGC";
  if (n < 1200) ans = "ABC";
  else if (n < 2800) ans = "ARC";
  cout << ans << endl; 
}