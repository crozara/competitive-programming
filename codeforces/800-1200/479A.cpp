/**
 * Problem: A. Expression
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/479/A
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
    int a, b, c; 
    cin >> a >> b >> c;

    int op1 = a + b + c;
    int op2 = a * b * c;
    int op3 = a + b * c;
    int op4 = a * b + c;
    int op5 = (a + b) * c;
    int op6 = a * (b + c);

    int ans = max({op1, op2, op3, op4, op5, op6});

    cout << ans << endl;

    return 0;
}