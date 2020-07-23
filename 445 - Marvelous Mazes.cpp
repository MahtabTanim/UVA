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
  MP;
  FP;
  while (getline(cin, s)) {
    int c = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] >= 48 && s[i] <= 57) c += (s[i] - 48);
      else {
        if (s[i] == 'b') {
          for (int k = 0; k < c; k++) cout << " ";
          c = 0;
        } else if (s[i] == '!') cout << endl;
        else {
          for (int k = 0; k < c; k++) cout << s[i];
          c = 0;
        }
      }
    }
    cout << endl;
  }
  return 0;
}
