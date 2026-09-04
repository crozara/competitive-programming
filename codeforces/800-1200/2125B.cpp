/**
 * Problem: B. Left and Down
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2125/B
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
    int t; 
    cin >> t;

    while(t--) {
        ll x, y, k;
        cin >> x >> y >> k;
        
        if (x == 0 and y == 0) {
            cout << "0" << endl;
            continue;
        }

        //MDC
        ll g = gcd(x, y);
        
        ll dx = x / g;
        ll dy = y / g;
        
        if(dx <= k and dy <= k) 
            cout << "1" << endl;
        else 
            cout << "2" << endl;
    }
    return 0;
}