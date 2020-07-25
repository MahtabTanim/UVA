#include<bits/stdc++.h>

using namespace std;#
define mod 1000000007# define pb push_back# define mp make_pair# define MP ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);#
define IG cin.ignore(numeric_limits < streamsize > ::max(), '\n');#
define ll long long int# define N 1378# define maxn 1000003# define FP ff.open("output.txt")# define FR ff.open("output.txt")
fstream ff;

ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r;
string s1, s2, s;

int main() {
  FP;
  while (cin >> n && n) {
    queue < int > Q;
    vector < int > Num;
    for (int i = 1; i <= n; i++) Q.push(i);
    while (Q.front() != Q.back()) {
      x = Q.front();
      Num.pb(x);
      Q.pop();
      x = Q.front();
      Q.pop();
      Q.push(x);
    }

    cout << "Discarded cards:";
    if (Num.size()) cout << " " << Num[0];
    for (int i = 1; i < Num.size(); i++) cout << ", " << Num[i];
    cout << endl;
    cout << "Remaining card: " << Q.front() << endl;
  }
  return 0;
}
