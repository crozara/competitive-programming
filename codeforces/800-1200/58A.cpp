/**
 * Problem: A. Chat room
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/58/A
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

int main() {

    string s;
    cin >> s; 

    string alvo = "hello";
    int j = 0; 

    for (int i = 0; i < (int)s.size(); i++) 
    {
        if(s[i] == alvo[j])
        {
            j++;
            if(j ==  5)
                break;
        }
    }

    if (j == 5) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    return 0;   
}