/**
 * Problem: A. Anton and Letters
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/443/A
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
    set<char> t;
    int continuar = 1;

    while(continuar)
    {
        char s; cin >> s;
        if(s == '}')
            break;
        else if(s != '{' and s != ',')   
            t.insert(s);
    }

    cout << t.size() << endl;
    return 0;
}