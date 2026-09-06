/**
 * Problem: A. Soft Drinking
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/151/A
 */

#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinks = (k * l) / nl;
    int limes = c * d;
    int salt = p / np;

    cout << min({drinks, limes, salt}) / n << endl;

    return 0;
}