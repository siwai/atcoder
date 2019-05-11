#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    /**
     * 累積和
     * 隣接する業績が上がっていれば1
     */
    vector<int> s(N, 0);
    // s[0] = 0;
    for (int i = 0; i < N - 1; ++i) {
        int diff = A[i + 1] - A[i];
        if (diff > 0) {
            s[i + 1] = s[i] + 1;
        }
    }

    int ans = 0;
    for (int i = 0; i < N - K + 1; ++i) {
        if (s[i + (K - 1)] - s[i] == K - 1) {
            ans++;
        }
    }

    cout << ans << endl;


}