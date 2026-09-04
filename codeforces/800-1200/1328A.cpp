/**
 * Problem: A. Divisibility Problem
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1328/A
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

    while(t--)
    {
        int a,b;
        cin >> a >> b;

        if(a % b == 0)
            cout << "0" << endl;
        else    
            cout << b - (a%b) << endl;
    }


    return 0;
}