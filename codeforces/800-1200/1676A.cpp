/**
 * Problem: A. Lucky?
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1676/A
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

    while (t--) 
    {
        string s; cin >> s;

        int soma1 = 0, soma2 = 0;

        for (int i = 0; i < 3; i++) 
        {
            soma1 += s[i] - '0';
            soma2 += s[i + 3] - '0';
        }

        cout << (soma1 == soma2 ? "YES" : "NO") << endl;
    }

    return 0;
}