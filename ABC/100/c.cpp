#include <bits/stdc++.h>

using namespace std;

// 素因数分解時の2の乗数
int cal(int n) {

    int count = 0;

    while (1) {
        if (n % 2 == 0) {
            n = n / 2;
            count++;
        } else {
            break;
        }
    }
    return count;
}

int main() {

    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    vector<int> s(N, 0);
    for (int i = 0; i < N; ++i) {
        s[i] = cal(a[i]);
    }

    // 数列aiを約数に分解->2の乗数を算出->1~nまで集計する
    int ans = 0;

    for (int i = 0; i < N; ++i) {
        ans += s[i];
    }

    cout << ans << endl;

}