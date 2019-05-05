#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

//    int x = 17;
//    int y = 11;
    int n;
//    int N = 100;

    /**
     * 実験
     */
    //    for (int i = 0; i < N; ++i) {
    //         n = i * x;
    //         int t = n % y;
    //
    //         cout << n << ":" << t << endl;
    //    }


    // 実験からB回ループすれば十分であることがわかる

    bool can = false;

    for (int i = 1; i < b+1; ++i) {
        n = i * a;
        int t = n % b;
        if (t == c) {
            // can = true;
              cout << "YES" << endl;
            return 0;
        }
    }


    cout << "NO" << endl;










}
