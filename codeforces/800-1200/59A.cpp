/**
 * Problem: A. Word
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/59/A
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
    
    string s;
    cin >> s; 
    int x, y;
    x = y = 0;

    for(char c : s)
    {
        if(islower(c))
            x++;
        else
            y++;
    }
    
    if(y > x)
    {
        for(char &c : s)
            c = toupper(c);
    }
    else
    {
        for(char &c : s)
            c = tolower(c);
    }

    cout << s << endl;

    return 0;
}