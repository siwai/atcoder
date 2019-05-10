#include <bits/stdc++.h>

using namespace std;

int main() {

    int A, B, Ta;
    cin >> A >> B >> T;
    int currentTime = A;
    int ans = 0;
    while (currentTime <= T) {
        ans += B;
        currentTime += A;
    }
    cout << ans << endl;
}