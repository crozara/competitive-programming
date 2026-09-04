/**
 * Problem: A. Petya and Strings
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/112/A
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
    string a, b;
    cin >> a >> b;
    
    for(char &c : a)
        c = tolower(c);

    for(char &c : b)
        c = tolower(c);

    if(a > b)
        cout << 1 << endl;

    else if(b > a)
        cout << -1 << endl;
    
    else
        cout << 0 << endl;

    return 0;
}