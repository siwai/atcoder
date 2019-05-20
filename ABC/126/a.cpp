#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    cout<<  gcd(15, 20)<<endl;
    char s = S[K - 1];
    if (s == 'A') {
        S[K - 1] = 'a';
    }

    if (s == 'B') {
        S[K - 1] = 'b';
    }
    if (s == 'C') {
        S[K - 1] = 'c';
    }


    cout << S << endl;

}