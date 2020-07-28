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
    cin >> t;
    while (t--) {
        cin >> n;
        double sum = 0;
        vector < double > d(n);
        for (int i = 0; i < n; i++) {
            cin >> d[i];
            sum += d[i];
        }
        double avg = sum / (double) n;
        int i = 0;
        double j = 0;
        for (i = 0; i < n; i++) {
            if (d[i] > avg) j++;
        }
        j = j / (double) n;
        printf("%.3lf%\n", j * 100);
    }
    return 0;
}
