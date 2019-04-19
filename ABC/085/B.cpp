#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }


    vector<int> num(110);

    for (int j = 0; j < N; ++j) {
        num.at(A.at(j))++;
    }

    int res =0;

    for (int i = 1; i < 101; ++i) {
        // cout << num.at(i);
        if(num.at(i)){
            res++;
        }
    }
    cout << res << endl;

}
