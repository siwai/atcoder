// 累積和の学習
// cf. https://qiita.com/drken/items/56a6b68edef8fc605821

#include <bits/stdc++.h>

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    // 累積和と連想配列
    vector<long> s(N + 1, 0);

    map<long, long> nums;
    for (int i = 0; i < N; ++i) s[i + 1] = s[i] + a[i];
    for (int i = 0; i < N + 1; ++i) nums[s[i]]++;


    // 集計処理
    long res = 0;
    for (auto it : nums) {
        //printf(it);
        //printf(it.second);
        //MEMO: キー・値それぞれを itr->first, itr->second
        long num = it.second; // it.first が it.second 個ある
        res += num * (num - 1) / 2; //NC2
    }
    cout << res << endl;
}
