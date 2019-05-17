#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {


    int N;
    cin >> N;
    int M = 3500;

    // 全探索だとオーダーがO(n^3)
    // N, h, nが既知ならば，wは一意に定まるので，O(N^2)でおｋ

    int ans_h;
    int ans_n;
    int ans_w;
    bool fff = false;
    for (int h = 1; h <= M; ++h) {
        if (fff) { break; }
        for (int n = 1; n <= M; ++n) {
            if (4 * h * n - N * n - N * h == 0) { continue; }
            double w = (N * h * n) / (4 * h * n - N * n - N * h);
            int ww = (N * h * n) / (4 * h * n - N * n - N * h);
            bool f = false;
            bool ff = false;
//            float integral_part = 0;
//            float fractional_part = modf(w, &integral_part);
            if (w == ww) {
                f = true;
            }
//            if (fractional_part == 0) {
//                f = true;
//            }
            if (w > 0) {
                ff = true;
            }
            // cout << fractional_part << ";" << w << endl;

            if (f && ff) {
                //cout << w << ":" << h << ":" << n <<endl;
                ans_w = (int) w;
                ans_h = h;
                ans_n = n;
                fff = true;
                break;
            }
        }
    }
    cout << ans_h << " " << ans_n << " " << ans_w << endl;
    // cout << ans_h << ans_n << ans_w << endl;
}