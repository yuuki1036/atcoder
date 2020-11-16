#include <bits/stdc++.h>
using namespace std;
int main(){
  string a, b;
  cin >> a >> b;
  int al = a.size(), bl = b.size();
  if(a == b){ cout << "EQUAL" << endl; return 0; }
  if(al > bl){ cout << "GREATER" << endl; return 0; }
  if(al < bl){ cout << "LESS" << endl; return 0; }
  for(int i=0; i<al; ++i){
    int an = a[i]+0, bn = b[i]+0;
    if(an > bn){ cout << "GREATER" << endl; return 0; }
    if(an < bn){ cout << "LESS" << endl; return 0; }
  }
}