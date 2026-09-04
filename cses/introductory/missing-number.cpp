/**
 * Problem: Missing Number
 * Plataforma: CSES
 * Link: https://cses.fi/problemset/task/1083
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
    int n, valor; cin >> n;
    vector<int> v;

    for(int i = 0; i < n-1; i++)
    {
        cin >> valor;
        v.push_back(valor);
    }

    sort(v.begin(), v.end());

    if(v[0] != 1)
    {
        cout << "1" << endl;
        return 0;
    }

    for(int i = 1; i < (int)v.size(); i++)
    {
        if(v[i-1] + 1 != v[i])
        {
            cout << v[i-1] + 1 << endl;
            return 0;
        }
    }   

    cout << n << endl;
    return 0;
}