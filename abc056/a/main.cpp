#include <bits/stdc++.h>
using namespace std;
int main(){
  char a, b;
  cin >> a >> b;
  char res = 'D';
  if((a == 'H' && b == 'H') || (a == 'D' && b == 'D')) res = 'H';
  cout << res << endl; 
}