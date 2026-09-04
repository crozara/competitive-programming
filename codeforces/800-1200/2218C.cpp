/**
 * Problem: C. The 67th Permutation Problem
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2218/C
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
        int n; 
        cin >> n;

        int menor = 1;         
        int maior = n * 3;        

        for(int i = 0; i < n; i++) 
        {
            cout << menor << " " << maior << " " << maior - 1 << " ";
    
            menor++;      
            maior -= 2;     
        }
        cout << endl; 
    }


    return 0;
}