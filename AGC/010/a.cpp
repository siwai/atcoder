#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
    int even = 0;
    int odd = 0;
    vector<int> A(N);
    int temp;
    for (int i = 0; i < N; ++i) {
        cin >> temp;
        if (temp % 2 == 0) { even++; }
        if (temp % 2 != 0) { odd++; }
    }

    while (1) {

        if (odd > 1) {
            if (odd % 2 == 0) {
                even += odd / 2;
                odd = 0;
            }
            if (odd % 2 == 1) {
                odd--;
                even += odd / 2;
                odd = 1;
            }
        }
        if (odd == 0 || odd == 1) { break; }
    }

    while (1) {
        if (even > 1) {
            if (even % 2 == 0) {
                even = even / 2;
            }
            if (even % 2 == 1) {
                int a = (even - 1) / 2;
                even -= a;
            }
        }
        if (even <= 1) {
            break;
        }
    }
    int ans = even + odd;
    if (ans == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
