/**
 * Problem: C. Omsk Programmers
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2236/C
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

void res()
{
    ll a, b, x;
    cin >> a >> b >> x;
    ll ans = INF;

    //Guardar tudo em pair (como se fosse pares ordenados);
    vector<pair<ll, int>> div_a;
    ll curr_a = a;
    int cont_a = 0;
    div_a.push_back({curr_a, cont_a});

    while(curr_a > 0) 
    {
        curr_a = curr_a /x;
        cont_a++;
        div_a.push_back({curr_a, cont_a});
    }

    //A mesma lógica só que para o lado B
    
    vector<pair<ll, int>> div_b;
    ll curr_b = b;
    int cont_b = 0;
    div_b.push_back({curr_b, cont_b});

    while(curr_b > 0)
    {
        curr_b = curr_b / x;
        cont_b++;
        div_b.push_back({curr_b, cont_b});
    }

    for(auto &pa : div_a)
    {
        for(auto &pb : div_b)
        {
            ll ops = pa.s + pb.s + abs(pa.f - pb.f);
            ans = min(ans, ops);
        }
    }

    cout << ans << endl;

}

int main() { _
    int t; cin >> t;

    //Fiz fazendo a chamada da função para organizar melhor;
    while(t--)
        res();
            
    return 0;
}