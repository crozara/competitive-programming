/**
 * Problem: A. Nearly Lucky Number
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/110/A
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
    string n; cin >> n;
    int cont = 0;

    for(int i = 0; i < (int)n.size(); i++)
    {
        if(n[i] == '4' or n[i] == '7') 
            cont++;
    }

    if(cont == 4 or cont == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}