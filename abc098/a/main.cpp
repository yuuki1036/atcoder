#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  int ans = -1e9;
  cout << max(max(max(ans, a+b), a-b), a*b) << endl;
}