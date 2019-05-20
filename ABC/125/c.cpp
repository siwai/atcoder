#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define vl vector<ll>
#define vvi vector< vector<int> >
#define vvl vector< vector<ll> >

using namespace std;

int main() {

    int N;
    cin >> N;
    vector<int> a(N);

    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

     long long MAX = pow(10, 9);
//    long long MAX = pow(10, 6);
    vector<long long> c(MAX + 10, 0);

    /**
     * 1つの整数の約数を算出O(N)
     * m個の約数の最大公約数の算出->そのままやるとO(N^M)
     * メモリ使えばO(1)
     *
     */


    for (int i = 0; i < N; ++i) {
        int n = a[i];
        c[n]++;
        // 約数の算出
        for (long long  j = 1; j <= n / 2; ++j) {
            //cout<< n <<":"<<j<<endl;
            if (n % j == 0) {
                //cout<< j<<endl;
                c[j]++;
            }
        }
    }

//    cout << "---" <<endl;
    long long ans;
    for (long long  i = MAX + 5; i >= 0; --i) {
        // cout << i <<endl;
        if (c[i] >= N - 1) {
            // cout << i <<endl;
            ans = i;
            break;
        }
    }

//    cout << "---" <<endl;
    cout << ans << endl;

    return 0;
}

//
//#define ll long long
//#define vl vector<ll>
//#define vvl vector< vector<ll> >
//using namespace std;

ll gcd(ll a, ll b){
    ll q = max(a, b);
    ll r = min(a, b);
    while (r){
        ll t = q;
        q = r;
        r = t % r;
    } return q;
}

int main(){
    ll n,g; cin >> n;
    vl a(n), b(n), vte(n), etv(n); cin >> a[0];
    g = a[0];
    vte[0] = a[0];
    for (ll i = 1; i < n; ++i){
        cin >> a[i];
        g = gcd(g, a[i]);
        vte[i] = g;
    }g = a[n - 1];
    etv[0] = a[n - 1];
    for (ll i = 1; i < n; ++i){
        g = gcd(g, a[n - 1 - i]);
        etv[i] = g;
    }

    ll ans = g;
    for (ll i = 0; i < n ; ++i){
        if (i == 0) ans = max(ans, etv[n - 2]);
        else if (i == n - 1) ans = max(ans, vte[n - 2]);
        else ans = max(ans, gcd(vte[i - 1], etv[n - 2 - i]));
    }cout << ans << endl;
    return 0;
}
