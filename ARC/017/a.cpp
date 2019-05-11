#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
    string y = "YES";
    string n = "NO";
    bool isPrime = true;

    // 2~N-1までの数で割り切れない
    for (int i = 2; i < N; ++i) {
        int surplus = N % i;
        if (surplus == 0) {
            isPrime = false;
        }
    }

    string ans;
    if (isPrime) {
        ans = y;
    }
    if (!isPrime) {
        ans = n;
    }

    cout << ans << endl;


}