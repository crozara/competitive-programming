/**
 * Problem: A. Beautiful Year
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/271/A
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
    int y;
    cin >> y;

    while (true) 
    {
        y++;
        int a = y / 1000;
        int b = (y / 100) % 10;
        int c = (y / 10) % 10;
        int d = y % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d) 
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}