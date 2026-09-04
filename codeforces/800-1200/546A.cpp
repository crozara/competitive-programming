/**
 * Problem: A. Soldier and Bananas
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/546/A
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
    ll k, n, w; cin >> k >> n >> w;
    ll aux = 0;

    for(int i = 1; i < w+1; i++)
    {
        aux += k*i;
    }
    
    if(aux > n) cout << aux - n << endl;
    else cout << 0 << endl;

    return 0;
}