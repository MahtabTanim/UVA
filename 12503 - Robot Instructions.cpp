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
#define FR ff.open("input.txt")
#define valid(a, b) if (a >= 1 && a < row - 1 && b >= 1 && b < col - 1)
    fstream ff;

ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r, len;
string s1, s2, s;

int PP(string s) {
    if (s == "LEFT") return -1;
    else return 1;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> a;
        int res = 0;
        vector < string > v(a + 1);
        for (int i = 1; i <= a; i++) {
            cin >> s;
            if (s == "SAME") {
                cin >> s >> n;
                s = v[n];
            }
            res += PP(s);
            v[i] = s;
        }
        cout << res << endl;
    }
    return 0;
}
