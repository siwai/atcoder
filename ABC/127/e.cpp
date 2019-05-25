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
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
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

    vector<ll> aa(10e9+100);
    
    for (int i = 0; i < M; ++i) {
        cin >> b[i];
        cin >> c[i];
    }


    for (int i = 0; i <N ; ++i) {
        aa[i] = a[i];
    }

    for (int i = N; i < N+M; ++i) {
        int bbb = b[i];
        for (int j = 0; j <bbb ; ++j) {
            aa[N+j] = c[j];
        }
    }



//    for (int i = 0; i <M ; ++i) {
//        cout<< pairs[i].first << ":"<<pairs[i].second <<endl;
//    }
//    // pairs sort
//    sort(pairs.begin(),pairs.end());
//
//    for (int i = 0; i <M ; ++i) {
//        cout<< pairs[i].first << ":"<<pairs[i].second <<endl;
//    }
    // Aを昇順ソート
    sort(a.begin(),a.end());

    /**
     * 1. Aの最小値とCを比較する -> Cのほうが大きいならAをCに
     * 2. sort実行
     * 3. 1.2. をB回繰り返す
     * 4. 3. をM回繰り返す
     */


    //sort(ALL(pairs), compare_by_b);


//    for (int i = 0; i <M ; ++i) {
//        cout<< pairs[i].first << ":"<<pairs[i].second <<endl;
//    }


    //bool flag = false;

    ll max = 0;
    for (int i = 0; i < M; ++i) {
        //if(flag){break;}
        ll bTimes = pairs[i].second;
        // sort(a.begin(),a.end());
//        for (ll j = 0; j < bTimes ; ++j) {

        ll times = 0;
        for (ll j = 0; j < N ; ++j) {
            ll cTemp = pairs[i].first;
            //cout<< cTemp << a[0]<<endl;


            if (cTemp > a[j]){
                //cout<<"change" <<endl;
                a[j] = cTemp;
                times++;


                // sort(a.begin(),a.end());
            }

            if (times >= bTimes){ break;}
//            else{
//                flag = true;
//                break;
//
//            }
        }
    }

    ll ans = 0;

    for (int i = 0; i <N ; ++i) {
        ans+=a[i];

    }
    cout << ans << endl;

}