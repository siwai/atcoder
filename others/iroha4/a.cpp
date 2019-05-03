#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
    int A, B, C, D;
    cin >> A >> B >> C >> D;
//    vector<int> a(A);
//    vector<int> b(B);
//    vector<int> c(C);
//    vector<int> d(D);


//    for (int i = 0; i < A; ++i) cin >> A[i];
//    for (int i = 0; i < B; ++i) cin >> B[i];
//    for (int i = 0; i < C; ++i) cin >> C[i];
//    for (int i = 0; i < D; ++i) cin >> D[i];


    map<int, map<int, int> > s;
    for (int i = 0; i < A; ++i) {
        cin >> s[0][i];
    }
    for (int i = 0; i < B; ++i) {
        cin >> s[1][i];
    }
    for (int i = 0; i < C; ++i) {
        cin >> s[2][i];
    }
    for (int i = 0; i < D; ++i) {
        cin >> s[3][i];
    }

    vector<int> c(4, 0);
    // int a, b, c, d = 0;

    bool flag = true;
    vector<int> f(4,0);
    for (int i = 1; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if  (s[j][c[j]] == i){
                c[j]++;
                f[j] = 1;
              //  continue;
            }
//            else{
//                flag = false;
//            }
        }
    }

    for (int i = 0; i < 4; ++i) {
        f[i]
        
    }


    if  (!flag) { cout << 'No' << endl;}




//    for (int i = 1; i < 4; ++i) {
//        for (int j = 0; j < 4; j++) {
//            s[j][i]
//        }
//        if (rank == i) {
//
//        }
//    }
}