#include <bits/stdc++.h>
using namespace std;
int main(){
  string N;
  cin >> N;
  long long sum = 0;
  for(char n : N) sum += n-'0';
  cout << (sum%9 == 0 ? "Yes" : "No") << endl;
}