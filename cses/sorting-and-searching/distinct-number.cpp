/**
 * Problem: Distinct Numbers
 * Plataforma: CSES
 * Link: https://cses.fi/problemset/task/1621
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
    set<int> v;

    for(int i = 0; i < n; i++)
    {
        int valor; cin >> valor;
        v.insert(valor);
    }

    cout << v.size() << endl;

    return 0;
}