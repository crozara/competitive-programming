/**
 * Problem: A. Games on the Train
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2236/A
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

    while(t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int maxi = *max_element(v.begin(), v.end());
        int mini = *min_element(v.begin(), v.end());
        cout << maxi-mini+1 << endl;
    }
    return 0;
}