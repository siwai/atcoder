#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, M, C;
    cin >> N >> M >> C;

    int ans = 0;
    vector<int> B(M);
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }

    vector <vector<int> > A(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        int sum = 0;
        for (int j = 0; j < M; ++j) {
            sum += B[j] * A[i][j];
        }
        if (sum > -C) {
            ans++;
        }
    }

    cout << ans << endl;
}