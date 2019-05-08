#include <bits/stdc++.h>

using namespace std;

int main() {

    int A, B, C;
    cin >> A >> B >> C;


    int a = A;
    int b = B;
    int c = C;

    int count = 0;


    while (1) {
        if (a > b) {
            break;
        }
        if (b >= a) {
            b -= a;
            count++;
        }
        if (count == c) {
            break;
        }
    }

    int ans = count;
    cout << ans << endl;

}
