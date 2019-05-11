#include <bits/stdc++.h>

using namespace std;


int main() {

    int N;
    cin >> N;
    vector <string> s(N);
    for (int l = 0; l < N; ++l) {
        cin >> s[l];
    }
    int ans = 0;
    // ABの数
    int count = 0;
    // Aでおわる
    int isA = 0;
    // Bでおわる
    int isB = 0;
    int isAB = 0;
    for (int i = 0; i < N; ++i) {
        string temp = s[i];
        int M = temp.length();
        bool can = false;
        for (int j = 0; j < M; ++j) {
            char ch = temp[j];
            if (j == 0) {
                if (ch == 'B') {
                    isB++;
                    can = true;
                }
            }
            if (j == M - 1) {
                if (ch == 'A') {
                    isA++;
                    if (can) {
                        isAB++;
                        isA--;
                        isB--;
                    }
                }
            }
            if (j < M - 1) {

                if (ch == 'A' && temp[j + 1] == 'B') { count++; }
            }
        }
    }
    int ab = min(isA, isB);
    if (N == 1) {
        ans = count;
    }
    if (N > 1) {

        if (isA == isB && isAB == 0) {
            ans = ab + count; //ok
        }
        if (isA + isB == 0 && isAB > 0) {
            ans = ab + count + isAB - 1; // ok
        }
        if (isA != isB && isAB == 0) {
            ans = count + ab;//ok
        }
        if (isA + isB > 0 && isAB > 0) {
            ans = count + ab + isAB;


        }
    }
    cout << ans << endl;
}