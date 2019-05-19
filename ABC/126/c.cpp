#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {

    long long N, K;
    cin >> N >> K;

    double count = 0;
    double ans;


    for (int i = 1; i <= N; ++i) {
        if (i >= K) {
            count++;
            continue;
        }

        // i = 3, K=10のとき
        int temp = i;
        int tempCount = 0;
        while (1) {
            temp = temp * 2;
            tempCount++;
            if (temp >= K) {
                count += pow(0.5, tempCount);
                break;
            }
        }

    }


    ans = count / N;

    cout << fixed << setprecision(13) << ans << endl; // C++

    // cout << ans << endl;

}