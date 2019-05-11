#include <bits/stdc++.h>

using namespace std;
#define ll long long

vector<long long> divisor;

int calculateDivisor(long long N) {
    for (long long i = 1; i   <= N; ++i) {
        if (N % i == 0) {
            divisor.push_back(i);
        }
    }
    return 0;
}

long long solve(long long N) {
    long long M = divisor.size();
    long long ans;
    for (long long i = 1; i < M; ++i) {
        long long num = divisor[i] - 1;
        long long quotient = num / i;
        long long remainder = num % i;
        if (quotient == remainder) {
            cout  << i <<endl;
            ans += i;
        }
    }
    return ans;
}


int main() {

    long long N;
    cin >> N;
    long long ans;
    calculateDivisor(N);
    ans = solve(N);
    cout << ans << endl;

    return 0;
}