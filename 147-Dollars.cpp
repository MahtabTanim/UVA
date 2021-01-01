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

ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r;
string s1, s2, s;

ll coins[] = {
    5,
    10,
    20,
    50,
    100,
    200,
    500,
    1000,
    2000,
    5000,
    10000
};

ll Ways[300001];

void Process() {
    Ways[0] = 1;
    for (int i = 0; i < 11; i++) {
        for (int j = coins[i], k = 0; j <= 30000; j++, k++) Ways[j] += Ways[k];
    }
}

int main() {
    double x;
    Process();
    int c = 0;
    while (cin >> x && x) {
        double y = (x + .001) * 100;
        int i = (int) y;
        printf("%6.2f%17lld\n", x, Ways[i]);
    }

    return 0;
}
