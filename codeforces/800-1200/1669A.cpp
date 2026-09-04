/**
 * Problem: A. Division?
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1669/A
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
    while(n--)
    {
        int t; cin >> t;
        cout << "Division ";
        if(t >= 1900)
            cout << "1" << endl;
        else if(t >= 1600 and t <= 1899)
            cout << "2" << endl;
        else if(t >= 1400 and t <= 1599)
            cout << "3" << endl;
        else if(t <= 1399)
            cout << "4" << endl;
    }
    return 0;
}