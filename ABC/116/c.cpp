#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
    vector<int> a(N);

    for (int i = 0; i < N; ++i) {
        cin >> a.at(i);
    }


    int c = 0; // 回数
    int min = -1;

    // 任意の区間の最小値だけ水やりをすればよい
    for (int i = 0; i < N; ++i) {
        int temp = a[i];
        if (min == -1) {
            min = temp;
        }
        if (temp < min) {
            min = temp;
        }
    }
    if (min > 0) {
        for (int i = 0; i < N; ++i) {
            a[i] -= min;
        }
        c += min;
    }

    // 左端を固定し、閉区間の場所を探索
    // 条件 0 が見つかるまで
    int count;
//    int left = 0;
//    int right;
    int k = 0;

    for (int i = 0; i < N; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    bool w = true;
    while (w) {
        int x = -1;
        int y = -1;
        for (int left = 0; left < N; ++left) {
            int t = a[left];
//            cout <<"t" << t << endl;
            if (t == 0) {
                continue;
            }
            y = 1;

            int r = -1;
            for (int right = left + 1; right < N; ++right) {
                if (a[right] > 0) {
                    r = a[right];
                }
                if (a[right] == 0) {
                    break;
                }
            }

            if (left == N - 1) {
                c += a[left];
                // x = 1;c
            }

            if (r == -1) {
                c += a[left];
                a[left] = 0;
                x = 1;
                //break;
            }
            if (r > 0) {
                for (int i = left; i < left + r; ++i) {
                    a[i]--;
                }
                c++;
                x = 1;
            }
        }
        for (int i = 0; i < N; ++i) {
            cout << a[i] << " ";
        }
        cout << c << endl;
        if (x == -1) {
            w = true;
        }
        if (y == -1) {
            w = false;
        }
    }
    cout << c << endl;

}
