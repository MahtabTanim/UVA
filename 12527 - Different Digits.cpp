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

ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r;
string s1, s2, s;

bool process(int n) {
    bool status[10];
    memset(status, false, 10);
    while (n > 0) {
        int k = n % 10;
        if (status[k] == true) return false;
        status[k] = true;
        n /= 10;
    }
    return true;
}
int main() {
    while (cin >> l >> r) {
        int count = 0;
        while (l <= r) {
            if (process(l)) count++;
            l++;
        }
        cout << count << endl;
    }
    return 0;
}
