#include <bits/stdc++.h>
using namespace std;
int main(){
  int d, n;
  cin >> d >> n;
  int ans = n*pow(100, d);
  int ans2 = ans+pow(100, d);
  cout <<( n == 100 ? ans2 : ans )<< endl;
}