/**
 * Problem: B. The 67th 6-7 Integer Problem
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2218/B
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
    int n; cin >> n;
    
    while(n--)
    {
        vector<int> v;

        for(int i = 0; i < 7; i++)
        {
            int valor; cin >> valor;
            v.push_back(valor);
        }

        sort(v.begin(), v.end());

        int ans = 0;
        for(int i = 0; i < 6; i++)
        {
            v[i] = -v[i];
            ans += v[i];
        }
        cout << ans+v[6] << endl;
    }


    return 0;
}