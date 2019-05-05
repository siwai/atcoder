#include <bits/stdc++.h>

using namespace std;

int main() {

    int H, W;
    cin >> H >> W;
    int N = H * W;

    vector <vector<int> > a(H, vector<int>(W));
    vector <vector<int> > c(H, vector<int>(W));
    vector<int> v(3);
    v[0] = 0;
    v[1] = 1;
    v[2] = -1;

    char temp;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> temp;
            if (temp == '#') {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
        }
    }


    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {

            // bombだったら-1
            if(a[i][j] == 1){
                c[i][j] = -1;
                continue;
            }

            // 座標がbombでないとき周囲1マスの探索をする
            for (int k = 0; k < 3; ++k) {
                for (int l = 0; l < 3; ++l) {

                    int x, y;
                    int h, w;
                    h = i + v[k];
                    w = j + v[l];

                    if (h < 0 || w < 0) {
                        continue;
                    }
                    if (h >= H || w >= W ) {
                        continue;
                    }
                    if (h == i && w == j) {
                        continue;
                    }
                    if (!a[h][w]) {
                        continue;
                    }
                    if (a[h][w] == 1) {
                        c[i][j]++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if  (c[i][j] == -1) {
                cout << "#";
            }
            if  (c[i][j] > -1){
                cout << c[i][j];
            }
        }
        cout << endl;
    }

}
