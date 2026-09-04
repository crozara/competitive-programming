/**
 * Problem: Permutations
 * Plataforma: CSES
 * Link: https://cses.fi/problemset/task/1070
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

    if(n == 1)
        cout << "1" << endl;

    if(n == 2 or n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
    if(n > 3)
    {
        for(int i = 2; i <= n; i+=2)
            cout << i << " ";
        for(int i = 1; i <=n; i+=2)
            cout << i << " ";
    }
    cout << endl;


    return 0;
}