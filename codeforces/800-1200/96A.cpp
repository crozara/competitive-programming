/**
 * Problem: A. Football
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/96/A
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
    int atual = 1, maxm = 1;

    for(int i = 1; i <= (int)s.size(); i++)
    {
        if(s[i-1] == s[i])
        {
            atual++;
            maxm = max(atual, maxm);
        }
        else
            atual = 1;
    }

    if(maxm >= 7)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;


    return 0;
}