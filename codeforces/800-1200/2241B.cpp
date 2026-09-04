/**
 * Problem: B. Good times Good times
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2241/B
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
        string x; 
        cin >> x;

        // A função string(n, char) repete o caractere 'n' vezes.
        string y = "1" + string(x.size() - 1, '0') + "1";

        cout << y << endl;
    }

    return 0;
}