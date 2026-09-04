/**
 * Problem: A. Games
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/268/A
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
    int t;
    cin >> t;

    vector<pair<int,int>> v(t);

    for (int i = 0; i < t; i++)
        cin >> v[i].f >> v[i].s;

    int ans = 0;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (v[i].f == v[j].s)
                ans++;
        }
    }

    cout << ans << endl;

    return 0;
}