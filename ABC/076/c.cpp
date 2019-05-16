#include <bits/stdc++.h>

using namespace std;


int main() {

    string S, T;
    cin >> S >> T;
    string UNRESTORABLE = "UNRESTORABLE";
    int lengthS = S.length();
    int lengthT = T.length();


    // 例外
    if (lengthS < lengthT) {
        cout << UNRESTORABLE << endl;
        return 0;
    }

    int n = -1;
    // とりあえず辞書順文字列は後で考える
    // 文字列S中に文字列Tが存在可能化どうかを文字列Sのi番目の文字を起点にしたときに考える
    for (int i = 0; i < lengthS; ++i) {
        for (int j = 0; j < lengthT; ++j) {
            if (i + j >= lengthS) { break; }
            char s = S[i + j];
            char t = T[j];
            if (s != t && s != '?') {
                break;
            }
            if (j == lengthT - 1) {
                n = i;
            }
        }
    }

    string ans;
    if (n == -1) {
        ans = UNRESTORABLE;
    }

    int temp = 0;
    if (n > -1) {
        for (int i = 0; i < lengthS; ++i) {

            // 文字列Tに変換
            if (i >= n && i < n + lengthT) {
                S[i] = T[temp];
                temp++;
            }
            if (S[i] == '?') {
                S[i] = 'a';// 辞書順
            }
        }
        ans = S;
    }

    cout << ans << endl;
}