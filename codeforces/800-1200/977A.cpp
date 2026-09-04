/**
 * Problem: A. Wrong Subtraction
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/977/A
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

    for(int i = 0; i < k; i++)
    {
        string ans = to_string(n);
        if(ans[ans.size()-1] != '0')
            n--;
        else
            n = n/10;
    }
    
    cout << n << endl;

    return 0;
}