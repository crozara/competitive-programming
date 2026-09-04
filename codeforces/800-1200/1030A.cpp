/**
 * Problem: A. In Search of an Easy Problem
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1030/A
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
    int valor;

    for(int i = 0; i < n; i++)
    {
        cin >> valor;
        if(valor == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;

    return 0;
}