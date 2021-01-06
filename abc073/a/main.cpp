#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  cout << (n >= 89 || (n+1)%10 == 0 ? "Yes" : "No") << endl;
}