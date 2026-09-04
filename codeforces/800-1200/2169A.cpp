/**
 * Problem: A. Alice and Bob
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2169/A
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
    
    for(int i = 0; i < t; i++)
    {
        int n, esc, valor, x= 0, y = 0; // x para maior, y para menor
        cin >> n >> esc;
        vector<int> b(n, 0);

        for(int i = 0; i < n; i++)
        {
            cin >> valor;
            b.push_back(valor); //Inseri todos os valores
            if(valor > esc)
                x++;
            else if(valor < esc)
                y++;
        }

        if(x > y)
            cout << esc+1 << endl;
        else
            cout << esc-1 << endl;
    }

    return 0;
}