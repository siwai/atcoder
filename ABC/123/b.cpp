#include <bits/stdc++.h>

using namespace std;

int main() {

    int N; //人数
    int A, B, C, D, E;

    cin >> N;
    cin >> A >> B >> C >> D >> E;

    // 各都市に滞在する人数
    vector<int> people(7);
    people.at(0) = N;

    vector<int> trans(5);
    trans.at(0) = A;
    trans.at(1) = B;
    trans.at(2) = C;
    trans.at(3) = D;
    trans.at(4) = E;

    int ans;
    int k;
    // 1分ごとに、都市iに滞在する人たちを可能な限り次の都市i+1に進める
    for ( k = 0; k < N; ++k) {
        if (ans){
            break;
        }
        for (int i = 0; i < 5; ++i) {
//          for (int j = 0; j < 5; ++j) {
            if (people.at(i) >= trans.at(i)) {
                people.at(i) -= trans.at(i);
                people.at(i + 1) += trans.at(i);
                // cout << people.at(i) << endl;
            }
            else if (people.at(i) < trans.at(i)) {
                int p = people.at(i);
                people.at(i) -= p;
                people.at(i + 1) += p;
            }
            if (people.at(5) == N) {
                ans = k+1;
            }
//            }
        }
    }
    cout << k << endl;
}
