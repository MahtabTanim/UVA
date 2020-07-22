#include<bits/stdc++.h>

using namespace std;#
define mod 1000000007# define pb push_back# define mp make_pair# define MP ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);#
define ll long long int# define N 1378# define maxn 1000003# define FP ff.open("output.txt")# define FR ff.open("output.txt")
fstream ff;

ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r;
string s1, s2, s;

char PP(char c) {
  if (c == 'A' || c == 'B' || c == 'C') return '2';
  if (c == 'D' || c == 'E' || c == 'F') return '3';
  if (c == 'G' || c == 'H' || c == 'I') return '4';
  if (c == 'J' || c == 'K' || c == 'L') return '5';
  if (c == 'M' || c == 'N' || c == 'O') return '6';
  if (c == 'P' || c == 'Q' || c == 'R' || c == 'S') return '7';
  if (c == 'T' || c == 'U' || c == 'V') return '8';
  if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z') return '9';
}

int main() {
  while (cin >> s) {
    string res = "";
    int len = s.size();
    for (int i = 0; i < len; i++) {
      if (s[i] >= 65 && s[i] <= 90) res.pb(PP(s[i]));
      else res.pb(s[i]);
    }
    cout << res << endl;
  }
  return 0;
}
