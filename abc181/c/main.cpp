#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  double X[n], Y[n];
  set<string> S;
  string s;
  for(int i=0; i<n; ++i) cin >> X[i] >> Y[i];
  for(int i=0; i<n; ++i){
    double x1 = X[i], y1 = Y[i];
    for(int j=i+1; j<n; ++j){
      double x2 = X[j], y2 = Y[j];
      ostringstream ss;
      if(x1 == x2) {
        ss << x1;
        s = "x=" + ss.str();
      } else if(y1 == y2){
        ss << y1;
        s = "y=" + ss.str();
      } else {
        double a = (y2-y1)/(x2-x1);
        double b = y1+(a*x1*-1);
        ss << a;
        s = "y=" + ss.str() + "x";
        ostringstream ss;
        ss << b;
        s += ss.str();
      }
      if(S.find(s) != S.end()) {
        cout << "Yes" << endl;
        return 0;
      }
      S.insert(s);
    }
  }
  cout << "No" << endl;
}