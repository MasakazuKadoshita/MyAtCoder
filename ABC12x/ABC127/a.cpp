#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define all(x) (x).begin(), (x).end()
#define dbg(x) cerr << #x << ": " << x << endl
int main() {
  int a, b;
  cin >> a >> b;
  if(a < 6)
    cout << 0 << endl;
  else if(a < 13)
    cout << b / 2 << endl;
  else
    cout << b << endl;
  return 0;
}