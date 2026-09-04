/**
 * Problem: A. A+B Again?
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1999/A
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
    int t; cin >> t;

    while(t--)
    {
        int a; cin >> a;
        int b, c;
        b = a / 10;
        c = a % 10;

        cout << b + c << endl;

    }
    return 0;
}