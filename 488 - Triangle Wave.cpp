#include<bits/stdc++.h>

using namespace std;#
define mod 1000000007# define pb push_back# define mp make_pair# define MP ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);#
define ll long long int# define N 1378# define maxn 1000003# define FP ff.open("output.txt")# define FR ff.open("output.txt")
fstream ff;

ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r;
string s1, s2, s;

int main() {
  FP;
  cin >> t;
  while (t--) {
    if (tcase) cout << endl;
    ++tcase;
    cin >> a >> b;
    int c = 0;
    while (b--) {
      if (c) cout << endl;
      for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) cout << i;
        cout << endl;
      }
      for (int i = a - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << i;
        cout << endl;
      }
      c++;
    }
  }
  return 0;
}
