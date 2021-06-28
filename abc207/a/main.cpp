#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int A[3] = {a, b, c};
  sort(A, A+3);
  cout << A[1]+A[2] << endl;
}