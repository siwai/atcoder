#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    int ans = 0;
    vector<int> V(N);
    for (int i = 0; i < N; ++i) {
        cin >> V[i];
    }

    int M = N / 2;
    vector<int> e(M);
    vector<int> o(M);
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            o[i / 2] = V[i];
        }
        if (i % 2 == 1) {
            e[i / 2] = V[i];
        }
    }
    int MAX = 100100;
    vector<int> ec(MAX, 0);
    vector<int> oc(MAX, 0);

    // 最頻値の算出 MAX1, MAX2
    for (int i = 0; i < M; ++i) {
        ec[e[i]]++;
        oc[o[i]]++;
    }
    int max_e, e2 = -1;
    int max_o, o2 = -1;
    for (int i = 0; i < MAX; ++i) {
        int te = ec[i];
        int to = oc[i];
        if (te > max_e) {
            e2 = max_e;
            max_e = i;
        } else if (te > e2) {
            e2 = i;
        }

        if (to > max_o) {
            o2 = max_o;
            max_o = i;
        } else if (to > o2) {
            o2 = i;
        }

    }

    // 最頻値が奇数項、偶数項で同一の場合
    if (max_e == max_o) {
        int maxEven = max_e;
        int maxOdd = o2;
        int ans1 = 0;
        int rewriteCountEven = 0;
        int rewriteCountOdd = 0;
        for (int i = 0; i < M; ++i) {
            int temp_e = e[i];
            int temp_o = o[i];
            if (temp_e != maxEven) {
                rewriteCountEven++;
            }
            if (temp_o != maxOdd) {
                rewriteCountOdd++;
            }
        }
        ans1 = rewriteCountEven + rewriteCountOdd;

        maxEven = e2;
        maxOdd = max_o;
        rewriteCountEven = 0;
        rewriteCountOdd = 0;
        for (int i = 0; i < M; ++i) {
            int temp_e = e[i];
            int temp_o = o[i];
            if (temp_e != maxEven) {
                rewriteCountEven++;
            }
            if (temp_o != maxOdd) {
                rewriteCountOdd++;
            }
        }
        int ans2 = rewriteCountEven + rewriteCountOdd;
        ans = min(ans1, ans2);
    // 同一でない場合
    } else {
        int rewriteCountEven = 0;
        int rewriteCountOdd = 0;
        for (int i = 0; i < M; ++i) {
            int temp_e = e[i];
            int temp_o = o[i];
            if (temp_e != max_e) {
                rewriteCountEven++;
            }
            if (temp_o != max_o) {
                rewriteCountOdd++;
            }
        }
        ans = rewriteCountEven + rewriteCountOdd;
    }
    cout << ans << endl;
}