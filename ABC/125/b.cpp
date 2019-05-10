#include <bits/stdc++.h>

using namespace std;


int main() {

    int N;
    cin >> N;

    vector<int> V(N);
    vector<int> C(N);
    for (int i = 0; i < N; ++i) {
        cin >> V[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> C[i];
    }

    int ans = 0;

    for (int i = 0; i < N; ++i) {
        int value = V[i];
        int cost = C[i];

        if (value > cost) {
            ans += value - cost;
        }
    }
    cout << ans << endl;
}