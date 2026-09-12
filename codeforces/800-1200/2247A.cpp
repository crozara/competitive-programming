/**
 * Problem: A. Zero Sum
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2247/A
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

    while(t--){
        int n; cin >> n;
        int positivos = 0;

        for(int i = 0; i < n; i++){
            int x; cin >> x;
            
            if(x == 1)
                positivos++;
        }

        if(n % 2 == 0 && positivos % 2 == (n / 2) % 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}