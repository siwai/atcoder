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


    int N, M;
    cin >> N >> M;

    vector<int> l(M);
    vector<int> r(M);
    for (int i = 0; i < M; ++i) {
        cin >> l[i];
        cin >> r[i];
    }

    vector<int> s(N);

    int maxLeft = 0;
    int maxRight = N - 1;
    for (int i = 0; i < M; ++i) {
        int left = l[i] - 1;
        int right = r[i] - 1;
        if (left >= maxLeft) {
            maxLeft = left;
        }
        if(right <= maxRight){
            maxRight = right;
        }
        // cout << left << ":" << right << endl;
//        for (int j = left; j < right + 1; ++j) {
//            s[j]++;
//        }
    }

    int ans = 0;
//    for (int i = 0; i < N; ++i) {
//        int temp = s[i];
//
//        // cout << i << ":" << temp << endl;
//        if (temp == M) {
//            ans++;
//        }
//
//
//    }
    if (maxRight< maxLeft){ans = 0;}
    else{
    ans = maxRight - maxLeft + 1;}
    cout << ans << endl;

}