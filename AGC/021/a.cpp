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


    ll N;
    cin >> N;

    /**
     * 1. まず大きい桁数から9が2つ以上続く場合はそれらの9を用いることは確定されるので例外として処理
     * 2. 99999(...)99XYZZZ ->  999(...)98999
     *    つまり，9以外の数字が最初に出てきたらその数-1をして以下9づめが最も大きい数字になる．
     */
    std::string S = std::to_string(N);
    int digit = S.length();
    bool f = true;
    int c;
    for (int i = 0; i < digit; ++i) {
        char temp = S[i];
        if (temp == '9') {
            continue;
        }
        if (i == 0) {
            c = 0;
            break;
        } else {
            c = i - 1;
            break;
        }
    }
    ll num = 0;
    for (int i = 0; i < digit; ++i) {
        if (i == c) {
            if (S[i] == '1') {
                continue;
            }
            ll n = (S[i] - '1') * pow(10, digit - (i + 1));
            num += n;
        } else {
            if (digit - i == 1) { num += 9; }
            else {
                num += 9 * pow(10, digit - (i + 1));
            }
        }
    }
    ll sum = 0;
    ll dig;
    while (num) {
        dig = num % 10;
        sum = sum + dig;
        num = num / 10;
    }

    ll ss = sum;
    ll um = 0;

    while (N) {
        dig = N % 10;
        um = um + dig;
        N = N / 10;
    }

    ll ans = max(um, ss);

    cout << ans << endl;

}