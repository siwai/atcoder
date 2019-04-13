#include <bits/stdc++.h>

using namespace std;

int main() {

    int A, B, C;
    int X;
    int ans = 0;
    const int FIFTY = 50;
    const int HUNDRED = 100;
    const int FIVE_HUNDRED = 500;

    cin >> A >> B >> C;
    cin >> X;
    int sum;

    for (int i = 0; i <= A; i++) {
        for (int j = 0; j <= B; j++) {
            for (int k = 0; k <= C; k++) {
                sum = FIVE_HUNDRED * i + HUNDRED * j + FIFTY * k;
                if(sum == X) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

}
