#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;


    vector<int> x(M);
    vector<int> y(M);
    vector<int> z(M);
    for (int i = 0; i < M; ++i) {
        cin >> x[i] >> y[i] >> z[i];
    }

    vector <vector<int> > f(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            f[i][j] = 0;
        }
    }


    for (int i = 0; i < M; ++i) {
        if (z[i] % 2 == 0) {
            f[x[i]-1][y[i]-1] = 2;

        }else{
            f[x[i]-1][y[i]-1] = 1;
        }
    }

    

    // 2組の和の偶奇は片方がわかれば自ずと確定する．


    for (int i = 0; i < N; ++i) {
        
    }
    
    
    
    
}