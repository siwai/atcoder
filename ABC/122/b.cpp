#include <bits/stdc++.h>

using namespace std;

int main() {

    string S;
    cin >> S;
    int ans;
    int N = S.length();
    vector<char> A(4);
    A[0] = 'A';
    A[1] = 'C';
    A[2] = 'G';
    A[3] = 'T';
    int max = -1;
    for (int i = 0; i < N; ++i) {
        int count = 0;
        for (int k = i; k < N; ++k) {
            char temp = S[k];
            bool can = false;
            for (int j = 0; j < 4; ++j) {
                // cout << temp << ":" << temp ;
                if (temp == A[j]) {
                    can = true;
                }
            }
            if (can) {
                count++;
            }
            if (!can) {
                break;
            }
        }
        // cout << count << endl;
        if (count > max) {
            max = count;
        }
    }
    ans = max;
    cout << ans << endl;
}