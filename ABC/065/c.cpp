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


long long facctorialMethod(long long k) {
    ll sum = 1;
    for (ll i = 1; i <= k; ++i) {
        sum = (sum * i) % (1000000007);
        //sum = sum % (1000000007);
    }
    return sum;
}

int main() {
    ll N, M;
    cin >> N >> M;
    ll ma = max(N, M);
    ll mi = min(N, M);
    if (ma - mi > 1) {
        cout << 0 << endl;
        return 0;
    }
    ll k = facctorialMethod(ma);
    ll kk = facctorialMethod(mi);
    ll ans;
    if (ma != mi) {
        ans = (k * kk) % (1000000007);
    }
    if (ma == mi) {
        ans = (k * kk * 2) % (1000000007);
    }
    ans = ans % (1000000007);

    cout << ans << endl;
}