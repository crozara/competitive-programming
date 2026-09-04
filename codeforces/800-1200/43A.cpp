/**
 * Problem: A. Football
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/43/A
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
    
    int n;
    cin >> n;

    map<string, int> freq;
    string s;

    for (int i = 0; i < n; i++) 
    {
        cin >> s;
        freq[s]++;
    }

    string resp;
    int maior = 0;

    for (auto [str, qtd] : freq) 
    {
        if (qtd > maior) 
        {
            maior = qtd;
            resp = str;
        }
    }

    cout << resp << endl;
    return 0;
}
