#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> A(5);
    int k;

    for (int i = 0; i < 5; ++i) {
        cin >> A.at(i);
    }
    cin >> k;
    bool can = true;

    int diff;


    diff = A[4] - A[0];

    if (diff > k) {
        can = false;
    }
    string s;
    if (can) {
        s = "Yay!";
    }
    if (!can) {
        s = ":(";

    }
    cout << s << endl;
}
