/**
 * Problem: A. Minimize!
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2009/A
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

    int t,a,b; cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        cout << (a-a) + (b - a) << endl;
    }

    return 0;
}