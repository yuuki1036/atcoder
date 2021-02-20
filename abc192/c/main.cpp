#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, k;

ll g1(ll x){
  if(x == 0) return 0;
  string S = to_string(x);
  vector<int> V;
  for(char s : S){
    int i = s-'0';
    V.push_back(i);
  }
  sort(V.begin(), V.end(), greater<int>());
  string R = "";
  for(int v : V) R += to_string(v);
  ll res = stoi(R);
  return res;
}

ll g2(ll x){
  if(x == 0) return 0;
  string S = to_string(x);
  vector<int> V;
  for(char s : S){
    int i = s-'0';
    if(i > 0) V.push_back(i);
  }
  sort(V.begin(), V.end());
  string R = "";
  for(int v : V) R += to_string(v);
  ll res = stoi(R);
  return res;
}


ll solve(int i, ll x){
  if(i == k) return x;
  ll calc = g1(x) - g2(x);
  return solve(i+1, calc);
}
int main(){
  cin >> n >> k;
  cout << solve(0, n) << endl;
}