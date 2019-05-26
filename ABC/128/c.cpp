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

int binary(int bina) {
    int ans = 0;
    for (int i = 0; bina > 0; i++) {
        ans = ans + (bina % 2) * pow(10, i);
        bina = bina / 2;
    }
    return ans;
}

/** ----from here ---------------------------------------------------------- */



// vector< vector<int> > vvv;
int main() {

    int N, M;
    cin >> N >> M;
    vector<int> k(10);
    vector <vector<int> > vvv(10, vector<int>(10));

    for (int i = 0; i < M; ++i) {
        cin >> k[i];
        for (int j = 0; j < k[i]; ++j) {
            cin >> vvv[i][j];
        }
    }

    vector<int> p(10, 0);
    for (int i = 0; i < M; ++i) {
        cin >> p[i];
    }

//    for (int i = 0; i <M ; ++i) {
//        cout<<  p[i];
//    }
//    cout<< vvv[0][0];




    vector<int> s(N);

    // vector<int> isOn = 2;

    int ans = 0;

    // ビット全探索　ビットパターン 2^10 = 1024
    for (int i = 0; i < (1 << N); i++) {
        int sum = 0;
        // ビットパターンと'+', '-'を関連付け
        // "0":'+'
        // "1":'-'
        for (int j = 0; j < N; j++) {
            if (i >> j & 1) s[j] = 0;
            else s[j] = 1;
        }

        int count = 0;
        for (int l = 0; l < M; ++l) {
            for (int m = 0; m < k[l]; ++m) {
                sum += s[vvv[l][m]];
            }
            //cout<< "---";
            //cout << s[0] <<":"<< s[1];
            //cout << p[l] <<":"<<sum%2<<endl;
            if (p[l] == (sum%2)) {
                count += 1;
            }

        }
        //cout << endl;
//         cout << s[0] <<":"<< s[1] <<":"<<count << endl;

        if (count == N) {
            ans++;
        }
//        for (int l = 0; l < N; ++l) {
//            cout << s[l];
//        }
        // cout << endl;
//


//        // 出力
//        if (sum == 7) {
//            cout << A;
//            for (int k = 0; k < 3; k++) {
//                // ビットパターンiからベクターopの文字を選択
//                cout << op[(i >> k) & 1] << num[k + 1];
//                if (k == 2) {
//                    cout << "=7" << endl;
//                    return 0;
//                }
//            }
//        }
    }





//
//    int MAX = pow(2,N);
//    int temp = MAX;
//    for (int i = 0; i < MAX; ++i) { // 最大1024回
//
//        temp
//
//
//    }

    cout << ans << endl;

}