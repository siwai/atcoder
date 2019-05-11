#include <bits/stdc++.h>

using namespace std;


int cal(int a, int b) {

    int ans;

    // 0
    if (a * b == 0 || a * b < 0) { return 0; }

    // positive
    if (a > 0) { return 1; }

    // negative
    if (b < 0) {
        int diff = a - b;
        if (-1 * diff % 2 == 0) {
            return -1;
        }
        if (-1 * diff % 2 == 1) {
            return 1;
        }
        return 2;
    }
    // ヌケモレチェック用 MECE
    return 2;
}


int main() {

    int a, b;
    cin >> a >> b;
    int ans = cal(a, b);
    string s;
    if (ans == -1 ){ s = "Negative";}
    if (ans == 0 ){ s = "Zero";}
    if (ans == 1 ){ s = "Positive";}
    if (ans == 2 ){ return 0;}
    cout << s << endl;
}