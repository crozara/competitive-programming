/**
 * Problem: A. Beautiful Matrix
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/263/A
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
    int matriz[5][5];
    int c, l;
    int mov = 0;

    for(int i  = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> matriz[i][j];
            if(matriz[i][j] == 1)
            {
                l = i;
                c = j;
            }
        }
    }
    
    while(l != 2 or c != 2)
    {
        if(l != 2)
        {
            if(l > 2)
                l--;
            else
                l++;

            mov++;
        }
        if(c != 2)
        {
            if(c > 2)
                c--;
            else
                c++;
            
            mov++;
        }
    }

    cout << mov << endl;


    return 0;
}