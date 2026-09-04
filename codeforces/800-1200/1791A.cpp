/**
 * Problem: A. Codeforces Checking
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1791/A
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
        char a; cin >> a;
        if(a == 'c' or a == 'd' or a == 'o' or a == 'e' or a == 'f' or a == 'r' or a == 's')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}