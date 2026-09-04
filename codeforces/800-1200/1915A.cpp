/**
 * Problem: A. Odd One Out
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1915/A
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
        int a, b, c; cin >> a >> b >> c;
        if(a == b) cout << c << endl;
        else if(a == c) cout << b << endl;
        else if(b == c) cout << a << endl;
    }
    return 0;
}