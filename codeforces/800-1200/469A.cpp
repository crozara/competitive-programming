/**
 * Problem: A. I Wanna Be the Guy
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/469/A
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
    set<int> levels;
    int p; cin >> p;

    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        levels.insert(x);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int y;
        cin >> y;
        levels.insert(y);
    }

    if ((int)levels.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}

   