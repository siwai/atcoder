#include <bits/stdc++.h>

using namespace std;

int main() {


    int N; cin >> N;
    vector<vector<int> > a(2, vector<int>(N));
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < N; ++j) {
            cin >> a[i][j];
        }
    }

    // 累積和
    vector<vector<int> > s(2, vector<int>(N+1, 0));

    // vector<int> s(N+1, 0); // s[0] = 0 になる
    // for (int i = 0; i < N; ++i) s[i+1] = s[i] + a[i];

    int c = 0;
    int d = 0;
    int m = -1;
    for (int i = 0; i < N; ++i) {
        d = 0;
        c = 0;
        for (int j = 0; j < N; ++j) {
            c += a[d][j];
            if (j == i ){
                d  =1  ;
                c += a[d][j];
            }
        }
//        cout << c << endl;
        if ( c > m ){
            m = c;
        }
    }
    cout << m << endl;



}
