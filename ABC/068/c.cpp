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
//    pair<int, std::string> p;
//    for (int i = 0; i < 3; ++i) {
//        p = make_pair(1, "he");
//        p = make_pair(2, "hel");
//        p = make_pair(3, "hell");
//    }
//    map<int, int> s;
    vector <vector<int> > s(M,vector<int>)
    for (int i = 0; i < M; ++i) {
        int key, value;
        cin >> key >> value;
        s[key] = value;
    }

    vector<int> c;
    for (pair<int, int> p:s) {
        int a = p.first;
        int b = p.second;
        cout << a << " " << b << endl;

        if (a == 1) {
            c.push_back(b);
        }

    }
    for (int i = 0; i < c.size(); ++i) {
        cout << c[i] << endl;
    }
    bool ans = false;
    for (pair<int, int> pp:s) {
        int a = pp.first;
        int b = pp.second;
        if (b == N) {
            for (int j = 0; j < c.size(); ++j) {
                int cc = c[j];
//                cout<<cc<< " " << a << " " << b<<endl;
                if (cc == a) {
                    ans = true;
                }
            }
        }
    }
    string str;
    if (ans) {
        str = "POSSIBLE";
    } else {
        str = "IMPOSSIBLE";
    }
    cout << str << endl;
}