/**
 * Problem: A. YES or YES?
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1703/A  
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
        string s; cin >>s;
        for(int i = 0; i < 3; i++)
        {
            s[i] = toupper(s[i]);
        }
        if(s[0] == 'Y' and s[1] == 'E' and s[2] == 'S') 
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}