#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {
    long long a, b, c, k;
    cin >> a >> b >> c >> k;
    long long ans;
    if (k % 2 == 0) {
        ans = a - b;
    } else {
        ans = b - a;
    }
    if (ans > 1000000000000000000) {
        cout << "Unfair" << endl;
        return 0;
    }
    cout << ans << endl;
}