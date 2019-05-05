#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;
    long a;

    // 例外 N = 1

    if  (N ==1 ){
        a = K;    cout << a << endl;
        return 0;
    }

    // 1つめを任意の色で塗る
    a = pow(K - 1, N - 1);

    /*
      for (int i = 0; i < N-1; ++i) {
        a *= (K-1)
    }
     */

    // 1つ目の選び方はｋ通りある
    a = a * K;

    cout << a << endl;
}
