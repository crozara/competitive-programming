/**
 * Problem: A. Even Odds
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/318/A
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
    ll n, k;
    cin >> n >> k;

    ll qtdImpares = (n + 1) / 2;

    if (k <= qtdImpares)
        cout << 2 * k - 1 << endl;
    else
        cout << 2 * (k - qtdImpares) << endl;

    return 0;
}