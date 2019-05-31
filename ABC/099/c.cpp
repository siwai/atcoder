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
long long N;
//vector<long long> six(10);
//vector<long long> six(10);

//ll maxA = -1;
//int count = 0;
vector <vector<int>> m(10, vector<int>(10));

ll cal(int c, int cc) {
    ll num = pow(6, c) + pow(9, cc);
    m[c][cc] = c + cc;
    if (num > N) {
        return ;
//        return min(m[--c][cc],m[c][--cc]);
    }
    for (int i = 1; i < 10; ++i) {
        cal(i,cc);
    }
    return cal(n, ++c);
}

int main() {
    cin >> N;
    ll maxA = cal(6, 1);
    ll maxB = cal(9, 1);
    ll max = max(maxA, maxB);
    ll ans = N - max;
    cout << ans << endl;
}