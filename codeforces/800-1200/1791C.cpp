/**
 * Problem: C. Prepend and Append
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1791/C
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
        int n; cin >> n;
        string s; cin >> s;
        int j = n-1;
        int i = 0;
        int cont = 0;

        while((i < j) and ((s[i] == '1' and s[j] == '0') or (s[j] == '1' and s[i] == '0')) )
        {
            cont++;
            i++;
            j--;
        }

        cout << n-cont*2 << endl;

    }

    return 0;
}