/**
 * Problem: A. Calculating Function
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/486/A
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
    ll n;
    cin >> n;

    if (n % 2 == 0)
        cout << n / 2 << endl;
    else
        cout << -(n + 1) / 2 << endl;
        
    return 0;
}