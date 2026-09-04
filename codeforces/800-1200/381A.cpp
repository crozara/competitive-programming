/**
 * Problem: A. Sereja and Dima
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/381/A
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
    int n; 
    cin >> n;

    vector<int> cartas(n);
    for(int i = 0; i < n; i++) 
        cin >> cartas[i];

    int esquerda = 0;
    int direita = n - 1;
    
    int pontos_jogador_A = 0;
    int pontos_jogador_B = 0;
    bool vez_do_jogador_A = true;

    while (esquerda <= direita) {
        int carta_escolhida;

        if (cartas[esquerda] > cartas[direita]) 
        {
            carta_escolhida = cartas[esquerda];
            esquerda++; 
        } 
        else 
        {
            carta_escolhida = cartas[direita];
            direita--;
        }

        // Adiciona os pontos para o jogador correto
        if (vez_do_jogador_A) 
            pontos_jogador_A += carta_escolhida;
        else 
            pontos_jogador_B += carta_escolhida;

        vez_do_jogador_A = !vez_do_jogador_A;
    }

    cout << pontos_jogador_A << " " << pontos_jogador_B << endl;

    return 0;
}