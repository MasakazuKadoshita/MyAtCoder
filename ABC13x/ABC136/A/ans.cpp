#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)
int main(void) {
  int a, b, c;
  cin >> a >> b >> c;
  cout << max(0, b + c - a) << endl;
  return 0;
}