#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    int n = 1000000007;

    long long p = 1;

    for (int i = 1; i <= N; ++i) {
        p = p * i;
        p = p % n;
    }



    cout << p << endl;
}
