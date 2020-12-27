#include<bits/stdc++.h>

using namespace std;
#define mod 1000000007
#define PI 3.14159265359
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
#define IG cin.ignore(numeric_limits < streamsize > ::max(), '\n');
#define ll long long int
#define N 1378
#define maxn 100000003
#define FP ff.open("output.txt")
#define FR ff.open("input.txt")
#define valid(a, b) if (a >= 1 && a < row - 1 && b >= 1 && b < col - 1)
    fstream ff;
ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r;
string s1, s2, s;

ll Ways[30001];

int main() {
    ll coins[] = {
        1,
        5,
        10,
        25,
        50
    };
    Ways[0] = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = coins[i], k = 0; j <= 30000; j++, k++) Ways[j] += Ways[k];
    }
    while (cin >> n) {
        if (Ways[n] > 1) cout << "There are " << Ways[n] << " ways to produce " << n << " cents change.\n";
        else cout << "There is only 1 way to produce " << n << " cents change.\n";
    }
    return 0;
}
