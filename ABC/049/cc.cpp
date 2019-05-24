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

    string S;
    cin >> S;
    int M = S.length();
    string inverse;

    for (int i = M - 1; i >= 0; --i) {
        inverse.push_back(S[i]);
    }

    int j = 0;
    bool ans = false;
    while (j < M) {
        string five;
        string six;
        string seven;

        for (int k = j; k < j + 5; ++k) {
            five.push_back(inverse[k]);
        }
        for (int k = j; k < j + 6; ++k) {
            six.push_back(inverse[k]);
        }
        for (int k = j; k < j + 7; ++k) {
            seven.push_back(inverse[k]);
        }
        if (five == "maerd" || five == "esare") {
            j += 5;
        } else if (six == "resare") {
            j += 6;
        } else if (seven == "remaerd") {
            j += 7;
        } else {
            break;
        }
        if (j == M ) {
            ans = true;
            break;
        }
    }

    string a;
    if (ans) {
        a = "YES";
    } else {
        a = "NO";
    }


    cout << a << endl;
}