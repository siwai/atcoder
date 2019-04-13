#include <bits/stdc++.h>

using namespace std;


int checkNumber(int &number) {
    if (number % 2 == 0) {
        number = number / 2;
        return true;
    }
    return false;
}

int main() {

    int N;
    int ans = 0;

    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
//    vector<int> A(N);

//    cin >> N;
//    for (int i = 0; i < N; ++i) cin >> A[i];



//    cout << N << A << endl;

    bool flg = false;
    do {
        flg = true;
        for (int i = 0; i < N; i++) {
            bool is = checkNumber(A.at(i));
            if (!is) {
                flg = false;

                break;
            }
        }
        ans++;
    } while (flg);

    cout << ans << endl;

}
