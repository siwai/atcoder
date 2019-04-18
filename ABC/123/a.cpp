#include <bits/stdc++.h>

using namespace std;

int main() {

    // int a, b, c, d, e;
    vector<int> A;
    int k;

    for (int i = 0; i < 5; ++i) {
        cin >> A.at(i);
        // cin >> a >> b >> c >> d >> e >> k;
    }
    cin >> k;
    bool can = false;

    int diff = A.at(4) - A.at(0);
    if (diff <= k){
        can = true;

    }

//    int diff;
//    bool can = false;
//    for (int i = 0; i < 5; ++i) {
//        for (int j = 0; j < 5; ++j) {
//            for (int k = 0; k < 5; ++k) {
//                for (int l = 0; l < 5; ++l) {
//                    for (int m = 0; m < 5; ++m) {
//                        j = i + 1;
//                        k = j + 1;
//                        l = k + 1;
//                        m = l + 1;
//                        diff =abs(A.at(i) - A.at(m));
//
//                        if (diff <= k){
//                        can = true;
//                            break;
//                        }
//                    }break;
//                }break;
//            }break;
//        }break;
//    }
    string s;
    if (can){
        s = "Yay!";
    }
    if (!can){
        s =":(";

    }
    cout << s << endl;
}
