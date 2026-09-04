/**
 * Problem: Number Spiral
 * Plataforma: CSES
 * Link: https://cses.fi/problemset/task/1071
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

    while (t--) 
    {
        ll y, x;
        cin >> x >> y;

        ll ans = 0;

        if(x <= y)
        {
            if(y % 2 == 0)
                ans = (y-1) * (y - 1) + x;
            else
                ans = y * y - x + 1;
        }
        else
        {
            if(x % 2 == 0)
                ans = x * x - y + 1;
            else
                ans = (x - 1) * (x-1) + y;
        }
                
        cout << ans << endl;
    }

    return 0;
}