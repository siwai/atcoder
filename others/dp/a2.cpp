#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define vl vector<ll>
#define vvi vector< vector<int> >
#define vvl vector< vector<ll> >
#define repd(i, a, b) for (int i=(a);i<(b);i++)
#define rep(i, n) repd(i,0,n)
#define ALL(v) v.begin(), v.end()
#define INF 1e9

using namespace std;

/**
 * calculate GCD(greatest common divisor)
 * @param a
 * @param b
 * @return
 */
unsigned euclidean_gcd(unsigned a, unsigned b) {
    if (a < b) return euclidean_gcd(b, a);
    unsigned r;
    while ((r = a % b)) {
        a = b;
        b = r;
    }
    return b;
}

/**
 * change minimum
 * @tparam T
 * @param a
 * @param b
 * @return bool
 */
template<class T>
inline bool changeMinimum(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

/**
 * change maximum
 * @tparam T
 * @param a
 * @param b
 * @return bool
 */
template<class T>
inline bool changeMaximum(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

/**
 * output answer
 * @tparam T
 * @param answer
 * @return
 */
template<typename T>
T output(T answer) {
    cout << answer << endl;
    return 0;
}

/** ----from here ---------------------------------------------------------- */

int main() {

    int N;
    cin >> N;
    vector<int> w(N);
    long long h[100010];


    // 無限大の値
    //const long long INF = 1LL << 60;

    for (int i = 0; i < N; ++i) cin >> h[i];

    // DP テーブル
    long long dp[100010];

    // DP テーブル全体を初期化 (最小化問題なので INF に初期化)
    for (int i = 0; i < 100010; ++i) dp[i] = INF;

    // 初期条件
    dp[0] = 0;

    for (int i = 1; i < N; ++i) {
        changeMinimum(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i > 1) {
            changeMinimum(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
            changeMinimum(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
        }
    }

    cout << dp[N - 1] << endl;

}