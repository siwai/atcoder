#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {

    int N;
    cin >> N;

//
//    vector<int> u(N - 1);
//    vector<int> v(N - 1);
//    vector<int> w(N - 1);

    vector<int> u(N);
    vector<int> v(N);
    vector<int> w(N);

    vector<int> color(N, 0);


    // 頂点i+1,iで色が違えば，1を立てる
    //vector<int> flag(N - 1, 0);
//    vector <vector<int> > f(N , vector<int>(N ));
    vector <vector<int> > f(N-1 , vector<int>(N -1));
    for (int i = 0; i < N-1; ++i) {
        for (int j = 0; j < N-1; ++j) {
            f[i][j] =0;
        }

    }

    for (int i = 0; i < N - 1; ++i) {
        cin >> u[i] >> v[i] >> w[i];
    }

    // 頂点1(0)は白(0)で塗る
    // 奇数のときだけにflagを用意して白黒変換してあげればよい基がする

    for (int i = 0; i < (N - 1); ++i) {

        if (w[i] % 2 == 0) { continue; }
        // 奇数のとき
        f[u[i]-1][v[i]-1] = 1;
    }

    color[0] = 0;
    int currentColor = 0;
    for (int i = 1; i < N; ++i) {
        // 頂点i とj(0<=j<i)を見る
        for (int j = 0; j < i; ++j) {
            if (f[j][i] == 1) {
                int temp = color[j];

                if (temp == 0) {
                    currentColor = 1;
                } else {
                    currentColor = 0;
                }
//                }currentColor == 0){
//                    currentColor = 1;
//                }else   {
//                    currentColor= 0;
//                }
            }

        }
        color[i] = currentColor;
    }

    for (int i = 0; i < N; ++i) {
        cout << color[i] << endl;
    }

    // cout << ans << endl;

}