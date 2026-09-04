/**
 * Problem: A. Magnets
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/344/A
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
    int ant, x;
    cin >> ant;

    int grupos = 1;

    for(int i = 1; i < n; i++) 
    {
        cin >> x;

        if(x != ant)
            grupos++;

        ant = x;
    }

    cout << grupos << endl;
}