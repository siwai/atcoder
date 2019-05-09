#include <bits/stdc++.h>

using namespace std;

int main() {

    int A, B, K;
    cin >> A >> B >> K;


    int a = A;
    int b = B;
    int k = K;

    int count = 0;
    int m = min(a, b);
    int ans;

    while (1) {
        if (A % m == 0 && B % m == 0) {
            count++;
            if (count == K) {
                ans = m;
                break;
            }
        }
        m--;
        if (m < 1) {
            return 0;
        }
    }
    cout << ans << endl;

}
