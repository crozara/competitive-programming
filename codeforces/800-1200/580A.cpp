/**
 * Problem: A. Kefa and First Steps
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/580/A
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
    int maior = 1, atual = 1;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for(int i = 1; i < n; i++)
    {
        if(v[i-1] <= v[i])
        {
            atual++;
        }
        else
        {
            if(atual > maior)
                maior = atual;
            atual = 1;
        }
    }
    maior = max(maior, atual);
    cout << maior << endl;
    return 0;
}