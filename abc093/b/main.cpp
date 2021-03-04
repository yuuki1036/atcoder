#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, k;
  cin >> a >> b >> k;
  set<int>S;
  for(int i=a; i<a+k; ++i) if(a <= i && i <= b) S.insert(i);
  for(int i=b-k+1; i<=b; ++i) if(a <= i && i <= b) S.insert(i);
  for(auto s : S) cout << s << endl;
}