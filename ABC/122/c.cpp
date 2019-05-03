#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    int MAX = 101010;

    // ACか
    vector<int> a(N, 0);
    for (int j = 0; j < N - 1; ++j) {
        if (S.at(j) == 'A' && S.at(j + 1) == 'C') {
            a[j] = 1;
        }
    }


    // 累積和
    vector<int> s(N + 1, 0);

    for (int k = 0; k < N; ++k) {
        s[k + 1] = s[k] + a[k];
    }
    // クエリ処理
    for (int i = 0; i < Q; ++i) {
        int l, r;
        cin >> l >> r;
        int ans = s[r - 1] - s[l - 1];
        cout << ans << endl;
    }


}