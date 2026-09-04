/**
 * Problem: C. Shifted MEX
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/2185/C
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

    for(int caso = 0; caso < t; caso++)
    {
        int num; 
        cin >> num;
        
        //Preencher o vector
        vector<int> v(num);
        for(int i = 0; i < num; i++)
        {
            cin >> v[i];
        }

        
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        // 3. Lógica da Maior Sequência
        int max_seq = 1;   // O tamanho mínimo de uma sequência é 1 (o próprio número)
        int seq_atual = 1; // Contador da sequência que estamos medindo agora

        for(int i = 1; i < (int)v.size(); i++)
        {
            if(v[i] == v[i-1] + 1) 
            {
                seq_atual++;
            } 
            else 
            {
                max_seq = max(max_seq, seq_atual);
                seq_atual = 1;
            }
        }
        
        max_seq = max(max_seq, seq_atual);
        cout << max_seq << endl;
    }

    return 0;
}