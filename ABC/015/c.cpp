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

int n, k, t[10][10];

bool dfs(int x, int y) {

    if (x == n) {
        cout<< "---" << endl;
        return y == 0;// XORが0ならばFound
    }
    cout << "x" << x << ":" << "y" << y << endl;
    for (int i = 0; i < k; ++i) { // k個の質問
        // bool aa = dfs(x + 1, y ^ t[x][i]);
        // cout<< aa << endl;
        if (dfs(x + 1, y ^ t[x][i])) { // XOR
            return true;
        }
    }
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            cin >> t[i][j];
        }
    }
    if (dfs(0, 0)) {
        cout << "Found" << endl;
    } else {
        cout << "Nothing" << endl;
    }
    return 0;
}

