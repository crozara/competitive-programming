/**
 * Problem: A. Dislike of Threes
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1560/A
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
    int t;cin >> t;

    while (t--) {
        int k; cin >> k;

        int cont = 0;
        int x = 1;

        while (cont < k) {
            if (x % 3 != 0 && x % 10 != 3) {
                cont++;
            }
            x++;
        }
        cout << x - 1 << endl;
    }

    return 0;
}