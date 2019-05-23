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

#define repd(i, a, b) for (int i=(a);i<(b);i++)
#define rep(i, n) repd(i,0,n)

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



    /**
     * カードの最終的な裏表は次の条件と等価である
     * 自分を含む周囲9マスの枚数が奇数ならば裏，偶数ならば表
     * また，端にあるマスは偶数であるから，端にないマスの数を数え上げればよい
     */


    long long N, M;
    cin >> N >> M;
    long long ans;
    if (N == 2 || M == 2) {
        ans = 0;
    } else if (N == 1 && M == 1) {
        ans = 1;
    } else if (N == 1 && M > 2) {
        ans = M - 2;
    } else if (M == 1 && N > 2) {
        ans = N - 2;
    } else if (N > 2 && M > 2) {
        ans = (N - 2) * (M - 2);
    } else {
        return 1; // RE
    }
    cout << ans << endl;
}
