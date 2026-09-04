/**
 * Problem: A. String Task
 * Plataforma: codeforces
 * Link: https://codeforces.com/problemset/problem/118/A
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
        string s; cin >> s;

        for(char &c : s)
            c = tolower(c);

        for(int i = 0; i < (int)s.size(); i++)
        {
            if(s[i] != 'a' and s[i] != 'e' and s[i] != 'i' and s[i] != 'o' and s[i] != 'u' and s[i] != 'y')
                cout << "." << s[i];
        }
        return 0;
    }