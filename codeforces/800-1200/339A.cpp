/**
 * Problem: A. Helpful Maths
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/339/A
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

    string s; cin >> s;
    vector<char> ans;

    for(char c : s)
    {
        if(c != '+')
            ans.push_back(c);
    }

    sort(ans.begin(), ans.end());

    for(int i = 0; i < (int)ans.size(); i++)
    {
        if(i)
            cout << '+';
        
        cout << ans[i];
    }

    return 0;
}


