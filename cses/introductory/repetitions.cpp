/**
 * Problem: Repetitions
 * Plataforma: CSES
 * Link: https://cses.fi/problemset/task/1069
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
    int maxi = 1, atual = 1;

    for(int i = 1; i < (int)s.size(); i++)
    {
        if(s[i-1] == s[i])
        {
            atual++;
            maxi = max(atual, maxi);
        }
        else
        {
            atual = 1;
        }
    }

    cout << maxi << endl;



    return 0;
}