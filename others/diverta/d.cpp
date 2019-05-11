#include <bits/stdc++.h>

using namespace std;


int cal(long long N) {
    long long ans = 0;
    long long max = -1;

    if (N == 1) { return 0; }

    for (int i = 2; i < N; ++i) {
        long long quotient = N / i;
        long long remainder = N % i;
        if (quotient == remainder) {
            // debug
            cout << i << ":" << quotient << ":" << remainder << endl;
            ans += i;
            if (i > max ){
                max = remainder;
            }

        }
    }
    return ans;
}


int main() {

    long long N;
    cin >> N;
    long long ans;
    ans = cal(N);
    cout << ans << endl;
}