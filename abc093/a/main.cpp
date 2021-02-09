#include <bits/stdc++.h>
using namespace std;
int main(){
  string S;
  cin >> S;
  int n = 0;
  for(char s : S) n += s-'a';
  cout << (n == 3 ? "Yes" : "No") << endl;
}