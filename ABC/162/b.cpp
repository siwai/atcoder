#include <bits/stdc++.h>

#define ll long long int

using namespace std;


/** ----from here ---------------------------------------------------------- */

int main() {

    int N;
    int M;
    cin >> N >> M;
    vector<int> a(M);
    for (int i = 0; i < M; ++i) {
        cin >> a.at(i);
    }
    int sum = 0;
    for (int i = 0; i < M; ++i) {
        sum += a.at(i);
    }
    int aa = -1;
    if (N >= sum) {
        aa = N - sum;
    }

    cout << aa << endl;
    return 0;
}