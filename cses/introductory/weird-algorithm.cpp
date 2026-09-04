/**
 * Problem: Weird Algorithm
 * Plataforma: CSES
 * Link: https://cses.fi/problemset/task/1068
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
    ll n; cin >> n;
    vector<ll> v;
    v.push_back(n);

    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n = n/2;
            v.push_back(n);
        }
        else
        {
            n = n*3 + 1;
            v.push_back(n);
        }   
    }

    for(int i = 0; i < (int)v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}