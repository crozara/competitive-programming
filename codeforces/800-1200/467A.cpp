/**
 * Problem: A. George and Accommodation
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/467/A
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
    int cont = 0;

    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(b - a >= 2)
            cont ++;
    }

    cout << cont << endl;


    return 0;
}