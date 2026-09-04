/**
 * Problem: A. The New Year: Meeting Friends
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/723/A
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
    vector<int> v(3);
    
    for(int i = 0; i < 3; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 0;

    ans = (v[1] - v[0]) + (v[2] - v[1]);

    cout << ans << endl;

    return 0;
}