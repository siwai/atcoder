#include <bits/stdc++.h>

using namespace std;



int main() {

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    sort(A.begin(), A.end(), greater<int>());

    int alice = 0;
    int bob = 0;

    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0)
        {
            alice += A.at(i);
        }
        if ( i % 2 == 1)
        {
            bob += A.at(i);
        }
    }
    int ans = alice - bob;
    cout << ans << endl;

}
