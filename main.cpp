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
        // cout << S.at(j) << S.at(j+1 ) << endl;
        if (S.at(j) == 'A' && S.at(j+1) == 'C'){
//            cout << "OK" << endl;
            a[j] = 1;
        }
//        else{cout << "NG" << endl;}
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


//    string aaa = "hoge";
//    if (aaa == "hoge\"){
//        cout << aaa;
//    }
//    for (int m = 0; m < N; ++m) {
//
//
//        cout << m << ":" << a[m] << endl;
//    }

    vector<int> an(Q);
    // クエリ処理
    for (int i = 0; i < Q; ++i) {
        int l,r;
        cin >> l >> r;
        int ans = s[r-1] - s[l-1];
        // printf("hoge");
//        cout << s[l] << endl;
//        cout << s[r+1] << endl;
        an[i] = ans;
cout << ans << endl;
    }

//    for (int m = 0; m < Q; ++m) {
//        cout << an[m] << endl;
//    }



}