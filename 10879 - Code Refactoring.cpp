#include<bits/stdc++.h>

using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
#define IG cin.ignore(numeric_limits < streamsize > ::max(), '\n');
#define ll long long int
#define N 1378
#define maxn 1000003
#define FP ff.open("output.txt")
#define FR ff.open("output.txt")
#define valid(a, b) if (a >= 1 && a < row - 1 && b >= 1 && b < col - 1)
    fstream ff;

ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r;
string s1, s2, s;

int main() {
    FP;
    int t;
    cin >> t;
    while (t--) {
        map < ll, ll > Divs;
        cin >> n;
        m = n;
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                Divs[i]++;
                n /= i;
            }
        }
        if (n > 1) Divs[n]++;
        a = b = c = d = 0;
        for (auto & i: Divs) {
            if (a == 0 && b == 0) {
                a = i.first;
                b = m / a;
                if (i.second > 1) {
                    c = i.first * i.first;
                    d = m / c;
                }
            } else {
                if (c == 0 && d == 0) {
                    c = i.first;
                    d = m / i.first;
                } else {
                    c = min(i.first, c);
                    d = m / c;
                }
            }
        }
        cout << "Case #" << ++tcase << ": " << m << " = " << a << " * " << b << " = " << c << " * " << d << endl;
    }
    return 0;
}
