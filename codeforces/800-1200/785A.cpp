/**
 * Problem: A. Anton and Polyhedrons
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/785/A
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
    int ans = 0;

    while(n--)
    {
        string s;
        cin >> s;

        if(s == "Tetrahedron")
            ans += 4;  
        else if(s == "Cube") ans += 6;  
        else if(s == "Octahedron") ans += 8;  
        else if(s == "Dodecahedron") ans += 12;  
        else if(s == "Icosahedron") ans += 20;  
    }

    cout << ans << endl;
    return 0;
}