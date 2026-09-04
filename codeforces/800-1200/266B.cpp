/**
 * Problem: B. Queue at the School
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/266/B
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
    int n, t; cin >> n >> t;

    string fila;
    cin >> fila;

    while (t--) 
    {
        for (int i = 0; i < n - 1; i++) 
        {
            if (fila[i] == 'B' && fila[i + 1] == 'G') 
            {
                swap(fila[i], fila[i + 1]);
                i++; // pula a próxima posição
            }
        }
    }

    cout << fila << endl;
}