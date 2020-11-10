#include <bits/stdc++.h>
using namespace std;
int main(){
  string o, e;
  cin >> o >> e;
  int ol = o.size(), el = e.size();
  for(int i=0; i<el; ++i) cout << o[i] << e[i];
  if(ol > el) cout << o[ol-1];
}