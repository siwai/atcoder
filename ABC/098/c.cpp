#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
    string S;
    cin >> S;

    vector<int> w(N, 0);
    vector<int> e(N, 0);

    for (int i = 0; i < S.length(); ++i) {
        char str = S[i];
        if (str == 'W') {
            w[i] = 1;
        }
        if (str == 'E') {
            e[i] = 1;
        }
    }


    vector<int> sw(N, 0);
    vector<int> se(N, 0);

    for (int i = 0; i < N; ++i) {
        sw[i + 1] = sw[i] + w[i];
        se[i + 1] = se[i] + e[i];
    }

    int min = -1;
    for (int i = 0; i < N; ++i) {
        int wp, ep;
        if (S[i] == 'E') {
            wp = sw[i - 1] - sw[0];
            ep = se[N - 1] - se[i + 1];
        }

        if (S[i] == 'W') {
            wp = se[i - 1] - se[0];
            ep = sw[N - 1] - sw[i + 1];
        }
        //cout << ep << wp << endl;
        int sum = wp + ep;
        if (min == -1) {
            min = sum;
        }
        if (sum < min) {
            min = sum;
        }
    }


    cout << min << endl;


}
