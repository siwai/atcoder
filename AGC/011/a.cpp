#include <bits/stdc++.h>

using namespace std;

int main() {

    int N; // 人数
    int C; // バスの定員
    int K; // 最大待機時間
    cin >> N >> C >> K;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A.at(i);
    }

    vector<int> B;

    int t;
    int currentBusNumber = 0;
    for (int i = 0; i < N; ++i) {
        if (B(currentBusNumber) >= C) {
            currentBusNumber++;
            B(currentBusNumber);
        }
        //else{}

        if (B(currentBusNumber))
        t = A.at(i);



        
    }

}
