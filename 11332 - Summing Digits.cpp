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

int sum(ll n) {
    ll x = n, sum1 = 0;
    
    while (x) {
        sum1 += x % 10;
        x /= 10;
    }
    
    if (sum1 < 10) return sum1;
    return sum(sum1);
}

int main() {
    
    while (cin >> n && n) {
        cout << sum(n) << endl;
    }
    
    return 0;
}
