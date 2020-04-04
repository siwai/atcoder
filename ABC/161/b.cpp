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
template<class T> inline bool changeMinimum(T& a, T b) {
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
template<class T> inline bool changeMaximum(T& a, T b) {
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

    int N, M ;
    cin >> N >> M;
    vector<int>  a(N,0);

    int sum=0;

    for (int i = 0; i < N; ++i) {
        cin >> a.at(i);
    }
    for (int i = 0; i < N; ++i) {
        sum += a.at(i);
    }
    int count = 0;

    double n, m;
    n = N;
    m = M;
//    cout << n << m ;
    double p,q;
    q = sum / (4.0 * m);
    string ans = "No";
    for (int i = 0; i < N; ++i) {
        if (a.at(i) >= q){
            count ++;
        }
        if(count >= M){ans = "Yes";}
    }
    cout << ans << endl;

}