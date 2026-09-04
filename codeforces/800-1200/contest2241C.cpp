/**
 * Problem: C. RemovevomeR
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2241/C
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
        int n; cin >> n;
        string s; cin >> s;
        int mudancas = 0;

        for (int i = 1; i < n; i++)
            if (s[i] != s[i - 1])
                mudancas++;

        if (mudancas == 1)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}