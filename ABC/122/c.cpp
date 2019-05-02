#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Q; cin >> N >> Q;
    string S;
    cin >> S;

    int MAX = 101010;

    // ACか
    vector<int> a(N, 0);
    for (int j = 0; j < N-1; ++j) {
        if (S.at(j) == 'A' && S.at(j+1) == 'C'){
            a[j] == 1;
        }
    }


    // 累積和
    vector<int> s(N+1, 0);

    for (int k = 0; k < N; ++k) {
        s[k+1] = s[k] + a[k];
    }
//
//    for (int m = 0; m < N; ++m) {
//        cout << m << ":" << s[m] << endl;
//    }


    string aaa = "hoge";
    if (aaa == "hoge\"){
        cout << aaa;
    }
    for (int m = 0; m < N; ++m) {


        cout << m << ":" << a[m] << endl;
    }

    // クエリ処理
    for (int i = 0; i < Q; ++i) {
        int l,r; cin >> l >> r;
        int ans = s[l] - s[r+1];
        cout << ans << endl;
    }



}