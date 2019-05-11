#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        cin >> B[i];
    }

    vector <pair<int, int> > AB(N);
    for (int i = 0; i < N; i++) {
        AB[i] = make_pair(A[i], B[i]);
    }

    sort(AB.begin(), AB.end());

    long long ans = 0; // 円
    int drinks = M;

    for (int i = 0; i < N; ++i) {

        int stock = AB[i].second;
        int temp;
        if (stock <= drinks) {
            temp = stock;
        } else {
            temp = drinks;
        }

        drinks -= temp;
        ans += AB[i].first * (long long)temp;

        if (drinks == 0) {
            break;
        }
    }
    cout << ans << endl;
}