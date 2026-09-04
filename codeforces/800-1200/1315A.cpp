/**
 * Problem: A. Dead Pixel
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/1315/A
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
        int coluna, linha, x, y;
        cin >> coluna >> linha >> x >> y;

        //Tirar tudo esq
        int opc1 = x*linha; 

        //Tirar tudo dir
        int opc2 = (coluna-1-x) * linha; 

        //Tirar acima
        int opc3 = coluna * y;

        //Tirar abx
        int opc4 = coluna * (linha-1-y);

        int maxim = max({opc1, opc2, opc3, opc4});
        cout << maxim << endl;
    }

    return 0;
}