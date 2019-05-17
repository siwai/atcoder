#include <bits/stdc++.h>
#include <cstdio>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;


int main() {
    char S[101010];
    scanf("%s", S);
    bool app[26];
    for (int i = 0; i < 26; ++i) {
        app[i] = false;
    }
    for (int i = 0; S[i] != '\0'; ++i) {

        app[S[i] - 'a'] = true; // aを0番目としたときのアルファベットが何番目かを表す
        // cout << S[i] - 'a' <<endl;
    }
    for (int i = 0; i < 26; ++i) {
        if (!app[i]) {
            // (char) (i + 'a') -> i番目のアルファベットを表す
            printf("%c\n", (char) (i + 'a'));
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
