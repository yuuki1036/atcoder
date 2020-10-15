#include <bits/stdc++.h>
using namespace std;
int main(){
  string a, b, c;
  cin >> a >> b >> c;
  int i = 0, j = 0, k = 0;
  int as = a.size(), bs = b.size(), cs = c.size();
  char now = 'a';
  while(true){
    if(now == 'a'){
      if(i == as){ cout << "A" << endl; return 0; }
      now = a[i];
      ++i;
    }else if(now == 'b'){
      if(j == bs){ cout << "B" << endl; return 0; }
      now = b[j];
      ++j;
    }else{
      if(k == cs){ cout << "C" << endl; return 0; }
      now = c[k];
      ++k;
    }
  }
}