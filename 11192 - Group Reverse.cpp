#include<bits/stdc++.h>

using namespace std;#
define mod 1000000007# define pb push_back# define mp make_pair# define MP ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);#
define ll long long int# define N 1378# define maxn 1000003# define FP ff.open("output.txt")# define FR ff.open("output.txt")
fstream ff;

ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r;
string s1, s2, s;

void As(map < char, int > & M, string z, int k) {
  for (int i = 0; i < z.size(); i++) M[z[i]] = k;
}

int main() {
  while (cin >> n && n) {
    cin >> s;
    string s1 = "", res = "";
    int l = s.size(), count = 0;
    n = l / n;
    for (int i = 0; i < l; i++) {
      s1.pb(s[i]);
      if ((i + 1) % n == 0) {
        reverse(s1.begin(), s1.end());
        res += s1;
        s1 = "";
      }
    }
    cout << res << endl;
  }
  return 0;
}
