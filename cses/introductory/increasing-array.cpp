/**
 * Problem: Increasing Array
 * Plataforma: CSES
 * Link: https://cses.fi/problemset/task/1094
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
    ll cont = 0; 
    vector<ll> v;

    for(int i = 0; i < n; i++)
    {
        int valor;  cin >> valor;
        v.push_back(valor);
    }

    for(int i = 1; i < n; i++)
    {
        if(v[i-1] > v[i])
        {
            cont += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
    cout << cont << endl;

    return 0;
}