#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N, 0);
    a[2] = 1;
    for (int i = 3; i < N; ++i) {
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
        if (a[i] >= 10007) {
            a[i] = a[i] % 10007;
        }
    }
    int ans = a[N - 1];
    cout << ans << endl;
}