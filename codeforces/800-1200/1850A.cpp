/**
 * Problem: A. To My Critics
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1850/A
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
    for(int i = 0; i < t; i++){
        int a, b, c; cin >> a >> b >> c;
        if(a + b >=10 or a + c >= 10 or b + c >=10){
            cout << "YES" << endl;
        } 
        else cout << "NO" << endl;
    }
    
    return 0;
}