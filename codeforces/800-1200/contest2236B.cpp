/**
 * Problem: B. Tatar TV Show
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2236/B
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

    while(t--)
    {
        int n, k; 
        cin >> n >> k;
        
        string s; 
        cin >> s;
        
        vector<int> freq(k, 0); 
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
                freq[i % k]++; 
        }

        bool possivel = true;
        
        for(int i = 0; i < k; i++)
        {
            if(freq[i] % 2 != 0)
            {
                possivel = false;
                break; 
            }
        }

        if(possivel)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}