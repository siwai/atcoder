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

string S;
int M;
int ans;

int cal(int n) {
    // cout << n << endl;
    if (n < 0) return 1;
    if (n % 2 == 1) {
        cal(--n);
    }
    string first, second;
    for (int i = 0; i < n / 2; ++i) {
        first += S[i];
        second += S[i + n / 2];
    }

    //    for (int i = 0; i < n; ++i) {
//        if (i < n / 2) {
//            first += S[i];
//        }
//        if (i >= n / 2) {
//            second += S[i];
//        }
//    }

//    cout << n << endl;
//    cout << first << endl;
//    cout << second << endl;
    if (first == second) {
//        cout << n << endl;
        ans = n;
        return 1;
    } else { cal(--n); }
}

int main() {
    cin >> S;
    M = S.length();
    //int ans = cal(M - 1);
    cal(M - 1);
    cout << ans << endl;

}