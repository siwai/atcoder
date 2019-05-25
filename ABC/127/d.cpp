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


bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}
bool comparator(pair<int, int> a, pair<int, int> b)
{
    return (a.first > b.first);
}
/** ----from here ---------------------------------------------------------- */

int main() {

    int N, M;
    cin >> N >> M;

    vector<ll> a(N);
    vector<int> b(M);
    vector<int> c(M);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];

    }
    // vector< vector<int> > s(M, vector<int> (M));


    vector < pair<ll, ll> > pairs(N);
    for (int i = 0; i < M; ++i) {
        ll bb, cc;
        cin >> bb >> cc;
        pairs[i] = make_pair(cc, bb);
//        pairs[i] = make_pair(bb,cc);
    }


//
//    for (int i = 0; i <M ; ++i) {
//        cout<< pairs[i].first << ":"<<pairs[i].second <<endl;
//    }


    // pairs sort
    // sort(pairs.begin(), pairs.end());
    sort(pairs.begin(), pairs.end(), comparator);


    // Aを昇順ソート
    sort(a.begin(), a.end());

    /**
     * 1. Aの最小値とCを比較する -> Cのほうが大きいならAをCに
     * 2. sort実行
     * 3. 1.2. をB回繰り返す
     * 4. 3. をM回繰り返す
     */

//
//    for (int i = 0; i <M ; ++i) {
//        cout<< pairs[i].first << ":"<<pairs[i].second <<endl;
//    }


    ll max = 0;

    bool f = false;
    for (int i = 0; i < M; ++i) {
        ll bTimes = pairs[i].second;
        if(f){break;}
        for (ll j = 0; j < bTimes; ++j) {
            ll cTemp = pairs[i].first;
            //cout<< cTemp << a[0]<<endl;


            if (cTemp > a[0]) {
                //cout<<"change" <<endl;
                a[0] = cTemp;

                sort(a.begin(), a.end());
            } else {
                f = true;
                break;
            }
        }
    }

    ll ans = 0;

    for (int i = 0; i < N; ++i) {
        ans += a[i];

    }
    cout << ans << endl;

}