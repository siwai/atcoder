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
    string S;
    cin >> N;
    cin >> S;

    /**
     * - すべて異なる場合 2^N-1
     * - 重複する文字が存在ー＞重複する文字列を使ってできる文字列を求める
     * -> (2^N -1 )- (重複する文字で構成される文字列)
     */


    /**
     * 重複する文字列で構成される文字列
     * abcXdefXXhijk
     * -> Xの数だけNから引いて // 2^ (N - X.length()) * (2^X.length()-1 + X)
     * 2^X.length()-1 + X
     */

    vector<int> a(26, 0);
    for (int i = 0; i < N; ++i) {
        char ch = S[i];
        int n = ch - 'a';
        a[n]++;
    }

    ll ans = 1;
    ll mod = 1e9 + 7;
    for (int i = 0; i < 26; i++) {
        ans = ans * (a[i] + 1) % mod;
    }
    cout << ans - 1 << endl;
}

