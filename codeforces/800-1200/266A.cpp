/**
 * Problem: A. Stones on the Table
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/266/A
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
   
    int n;
    string s;

    cin >> n >> s;

    int ans = 0;

    for (int i = 1; i < n; i++) 
    {
        if (s[i] == s[i - 1])
            ans++;
    }

    cout << ans << endl;
    return 0;
}