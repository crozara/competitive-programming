/**
 * Problem: B. Blank Space
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1829/B
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

    for(int i = 0; i < t; i++)
    {
        int n; cin >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans, seq;
        ans = seq = 0;

        for(int i = 0; i < n; i++)
        {
            if(v[i] == 0)
            {
                seq++;
                if(seq > ans)
                    ans = seq;
            }
            else
            {
                seq = 0;
            }
        }
        cout << ans << endl;

    }



    return 0;
}