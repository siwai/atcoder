#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.length();
    // cout << N << endl;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        int n = S[i] - '0';
        a[i] = n;
    }
    for (int j = 0; j < a.size(); ++j) {
        cout << a[j];
    }
    int ans = 0;
    int temp;
    bool flag = true;
    while (flag) {
        bool f = false;
//        for (int i = 0; i < a.size(); ++i) {
        for (int i = 0; i < a.size(); ++i) {
            int n = a[i];
            if (temp == 0 && n == 1) {
                //a.erase(a.begin() + i - 1, a.begin() + i);
                a.erase(i - 1,2);
//                for (int j = 0; j < a.size(); ++j) {
//                    cout << a[j];
//                }
                ans += 2;
                f = true;
                break;
            } else if (temp == 1 && n == 0) {
                a.erase(i - 1, 2);
//                a.erase(a.begin() + i - 1, a.begin() + i);
                ans += 2;
                f = true;
                break;
            }
            temp = n;
        }
        if (!f) {
            break;
        }
    }
    cout << ans << endl;
}
