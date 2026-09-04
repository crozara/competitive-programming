/**
 * Problem: B. Drinks
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/200/B
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
    int n; cin >> n;

    double soma = 0, x;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        soma += x;
    }

    cout << fixed << setprecision(12) << soma / n << endl;
    return 0;
}