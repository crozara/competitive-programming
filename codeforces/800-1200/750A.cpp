/**
 * Problem: A. New Year and Hurry
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/750/A
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
    int n, k; cin >> n >> k;
    int min = 60*4;
    int ans = 0;
    int cont = 0;

    for(int i = 1; i <= n; i++)
    {
        ans += 5*i;
        if(min-k-ans >= 0)
            cont++;
        else
            break;
    }

    cout << cont << endl;
    return 0;
}