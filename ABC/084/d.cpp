// 累積和の学習
// cf. https://qiita.com/drken/items/56a6b68edef8fc605821

#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
    int ans;


    int MAX = 101010;

    // 素数の絞り込み エラトステネスのふるい
    vector<int> is_prime(MAX, 1);
    is_prime[0] = 0, is_prime[1] = 0;
    for (int i = 2; i < MAX; ++i) {
        if (!is_prime[i]) continue;
        for (int j = i * 2; j < MAX; j += i) {
            is_prime[j] = 0;
        }
    }

    // 2017に似た数か; N,(N+1)/2 = prime number
    vector<int> a(MAX, 0);
    for (int j = 0; j < MAX; ++j) {
        // Nが素数か
        if (!is_prime[j]) {
            continue;
        }
        // (N+1)/2が素数か
        if (!is_prime[(j + 1) / 2]) {
            continue;
        }
        a.at(j) = 1;
    }

    // 累積和
    vector<int> s(MAX + 1, 0);
    for (int k = 0; k < MAX; ++k) {
        s[k + 1] = s.at(k) + a.at(k);
    }

    // クエリ処理
    for (int q = 0; q < N; ++q) {
        int l, r;
        cin >> l >> r;
        ++r;
        cout << s[r] - s[l] << endl;
    }

}