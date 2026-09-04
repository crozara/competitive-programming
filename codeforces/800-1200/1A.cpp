/**
 * Problem: A. Theatre Square
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1/A
 */

#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define pb push_back
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

    ll n, m, a; 
    cin >> n >> m >> a;

    ll x = (n + a - 1) / a;
    ll y = (m + a - 1) / a;

    cout << x*y << endl;

    
    return 0;
}