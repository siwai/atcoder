#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    int max_height = A.at(0);
    int ans = 1;


    int current;
    for (int i = 1; i < N; ++i) {
        current = A.at(i);
        if (current >= max_height) {
            ans++;
            max_height = current;
        }
    }
    cout << ans << endl;
}
