#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int n;
  cin >> n;
  ll a[n];
  for(int i=0; i<n; ++i) cin >> a[i];
  deque<ll> deq;
  bool t = n%2 == 0 ? true : false;
  for(int i=0; i<n; ++i){
    if(t){
      deq.push_back(a[i]);
      t = false;
    }else{
      deq.push_front(a[i]);
      t = true;
    }
  }
  for(int i=0; i<n; ++i){
    cout << deq[i];
    if(i+1 < n) cout << " "; 
  }
}