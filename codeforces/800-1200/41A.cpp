/**
 * Problem: A. Translation
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/41/A
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
    string s; cin >> s;
    string x; cin >> x;

    reverse(s.begin(), s.end());
    if(s == x) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}