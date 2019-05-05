#include <bits/stdc++.h>

using namespace std;


bool cal(int x1, int x2) {
    int t;
    int x, y;
    cin >> t;
    cin >> x >> y;

    int min = x + y;
    bool ans;

    if (t < min) {
        ans = false;
    }
    if (t = min) {
        ans = true;
    }
    if (t > min) {
        int diff = t - min;
        if (diff % 2 == 0) {
            ans = true;
        } else {
            ans = false;
        }

    }

    return ans;
}


int main() {

    int N;
    cin >> N;
    bool ans= true;
    bool temp = true;
    int x, y;
    for (int i = 0; i < N; ++i) {
        temp = cal();
        if (!temp) { ans = false; }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}