/**
 * Problem: A. Spy Detected!
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1512/A
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
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int comum;

        if (a[0] == a[1])
            comum = a[0];
        else if (a[0] == a[2])
            comum = a[0];
        else
            comum = a[1];

        for (int i = 0; i < n; i++) 
        {
            if (a[i] != comum) 
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}