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
 * @returna
 */
template<typename T>
T output(T answer) {
    cout << answer << endl;
    return 0;
}

/** ----from here ---------------------------------------------------------- */

bool check(char a, char b, char c) {
    if(a != b && b != c &&  c!=a ){
//        cout << a<< b << c<<endl ;
        return  true;
    }
    return false;
}
bool check2(char a, char b) {
    if(a != b ){
        return  true;
    }
    return false;
}

bool cal(int i, int j, int k ){
    if(j-i != k-j){
        return true;
    }
    return false;

}
int main() {

    int N;cin>>N;
    string S;cin>>S;


    long long  ans = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <=N ; ++j) {
            if ( j <= i){ continue;}
            if(!check2){
                continue;
            }
            for (int k = 1; k <=N ; ++k) {
                if(k <= j){ continue;}

                if(cal(i,j,k)) {
                    bool t = check(S[i-1], S[j-1], S[k-1]);
                    if(t){
//                        cout << i << j << k<<endl ;
                        ans++;
                    }
                }
//                cout << i << j << k ;
//                ans +=1;
            }
        }
    }

    cout << ans << endl;
    return 0;
}