#include <bits/stdc++.h>

using namespace std;


int main() {

    int N, T;
    cin >> N >> T;
    vector<int> t(N);
    for (int i = 0; i < N; ++i) {
        cin >> t[i];
    }

    // 差分行列
    vector<int> dif(N - 1, 0);
    for (int i = 0; i < N - 1; ++i) {
        dif[i] = t[i + 1] - t[i];
    }

    // 回答
    int x = 0;

    // N-1回
    for (int i = 0; i < N - 1; ++i) {
        int d = dif[i];
        if (d >= T) {
            x += T;
        }
        if (d < T) {
            x += d;
        }
    }
    // N回目
    x += T;
    int ans = x;
    cout << ans << endl;
}