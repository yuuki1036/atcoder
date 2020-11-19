#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
 int n, a, b;
 ll k;
 cin >> n >> k;
 map<int, ll> M;
for(int i=0; i<n; ++i){
   cin >> a >> b;
   if(M.find(a) != M.end()) M[a] += b;
   else M[a] = b;
 }
 for(auto& [num, c] : M){
   k -= c;
   if(k <= 0){ cout << num << endl; return 0; }
 }
}
