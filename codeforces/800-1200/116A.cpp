/**
 * Problem: A. Tram
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/116/A
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
    int a, b, ans = 0;
    int maior = 0;

    while(t--)
    {
        cin >> a >> b;
        ans += b-a;
        if(ans > maior)
            maior = ans;
    }
    cout << maior;
    return 0;
}