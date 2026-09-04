/**
 * Problem: B. Borze
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/32/B
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
    
    string s; cin >> s;

    for(int i = 0; i < (int)s.size(); i++)
    {
        if(s[i] == '-' and s[i+1] == '.')
        {
            cout << "1";
            i++;
        }
        else if(s[i] == '-' and s[i+1] == '-')
        {
            cout << "2";
            i++;
        }
        else
            cout << "0";
    }

    cout << endl;

    return 0;
}