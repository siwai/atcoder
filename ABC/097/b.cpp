#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {

    int X;
    cin >> X;
    int max;

    // X以下のべき乗数を求める -> X以下の最大のべき乗数を求める
    for (int b = 1; b <= 32; ++b) {
        for (int p = 2; p <= 10; ++p) {
            int pow = std::pow(b, p);
            // if (pow > X) { break; }
            if (max < pow && pow <= X) {
                max = pow;
            }
        }
    }
    cout << max << endl;

}