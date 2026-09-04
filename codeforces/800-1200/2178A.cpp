/**
 * Problem: A. Yes or Yes
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2178/A
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

    while (t--)
    {
        string s;
        cin >> s;
        int qtdY = 0;
        for (char c : s) 
            if (c == 'Y') qtdY++;
        

        if(qtdY <= 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}