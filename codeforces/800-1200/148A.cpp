/**
 * Problem: A. Insomnia cure
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/148/A
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
    int k,l,m,n,d; cin >> k >> l >> m >> n >> d;
    int ans = 0;

    for(int i = 1; i <= d; i++){
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) 
            ans++;
    }

    cout << ans << endl;
    

    return 0;
}