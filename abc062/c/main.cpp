#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll H, W, halfH, halfW, Sa, Sb, Sc, Sd, Se, Hrem, Wrem, Smax, Smin;
  cin >> H >> W;
  ll ans = 1e9;
  for(int Ha = 1; Ha<H; ++Ha){
    Sa = Ha*W;
    Hrem = H-Ha;
    if(Hrem > 1){
      Sb = Hrem/2*W;
      Sc = (Hrem-Hrem/2)*W;
      Smax = max(Sa, max(Sb, Sc));
      Smin = min(Sa, min(Sb, Sc));
      ans = min(ans, Smax-Smin);
    }
    Sd = Hrem*(W/2);
    Se = Hrem*(W-W/2);
    Smax = max(Sa, max(Sd, Se));
    Smin = min(Sa, min(Sd, Se));
    ans = min(ans, Smax-Smin);
  }
  for(int Wa = 1; Wa<W; ++Wa){
    Sa = H*Wa;
    Wrem = W-Wa;
    if(Wrem > 1){
      Sb = H*(Wrem/2);
      Sc = H*(Wrem-Wrem/2);
      Smax = max(Sa, max(Sb, Sc));
      Smin = min(Sa, min(Sb, Sc));
      ans = min(ans, Smax-Smin);
    }
    Sd = H/2*Wrem;
    Se = (H-H/2)*Wrem;
    Smax = max(Sa, max(Sd, Se));
    Smin = min(Sa, min(Sd, Se));
    ans = min(ans, Smax-Smin);
  }
  cout << ans << endl;
}
