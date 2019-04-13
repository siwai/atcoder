#include <bits/stdc++.h>

using namespace std;

int main() {

    string S;
    cin >> S;
    int N = S.size();


    //string current;
    char current;
    char begin;
    //string begin;


    begin = '0';
    current = begin;


    // vector<string> A(N);
    int ans_a = 0;
    for (int i = 0; i < N; ++i) {
        if (S[i] == current) {
            ans_a++;
            if (current == '0') {
                current = '1';
            } else {
                current = '0';
            }
        } else {
            current = S[i];
        }
    }

    begin = '1';
    current = begin;


    // vector<string> A(N);
    int ans_b = 0;
    for (int i = 0; i < N; ++i) {
        if (S[i] == current) {
            ans_b++;
            if (current == '0') {
                current = '1';
            } else {
                current = '0';
            }
        } else {
            current = S[i];
        }
    }


    int ans;
    if (ans_a >= ans_b) {
        ans = ans_b;
    } else {
        ans = ans_a;
    }

    cout << ans << endl;
}
