/**
 * Problem: A. Medium Number
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1760/A
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

    for(int i = 0; i < t; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
    
        if((a > b and c > a) or (a > c and b > a))
            cout << a << endl;
        else if((b > a and c > b) or (b > c and a > b))
            cout << b << endl;
        else
            cout << c << endl;
    }


    return 0;
}