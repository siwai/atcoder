#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {

    long long N, K;
    cin >> N >> K;
    vector<long long> a(N);
    vector<long long> b(N);
    for (long long i = 0; i < N; ++i) {
        cin >> a[i];
        cin >> b[i];
    }

    /**
     * メモリエラー; 最大要素数10^10 = 10000MB = 10 GB
     * sortの計算量はNlogN
     *
     */
//    vector<long long> v;
//    for (long long i = 0; i < N; ++i) {
//        for (long long j = 0; j < b[i]; ++j) {
//            v.push_back(a[i]);
//        }
//    }
//    sort(v.begin(), v.end());
//    cout << v[K - 1] << endl;


    /**
     * バケツソートを使う
     * 添字にai，連想配列のような感じ
     */

    vector<long long> num(100010, 0);
    for (long long i = 0; i < N; ++i) {
        num[a[i]] += b[i];
    }

    long long ans;
    long long current = 0;

    for (long long i = 0; i <= 100010; ++i) {
        if (num[i] > 0) {
            K -= num[i];
        }
        if (K <= 0) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

}