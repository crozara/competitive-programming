/**
 * Problem: A. Young Physicist
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/69/A
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

    int n, sumx, sumy, sumz, ansx = 0, ansy = 0, ansz = 0;
    cin >> n;  

    for(int i = 0; i < n; i++)
    {  
        cin >> sumx >> sumy >> sumz;
        ansx += sumx;
        ansy += sumy;
        ansz += sumz;
    }
    
    if(ansx == 0 and ansy == 0 and ansz == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}