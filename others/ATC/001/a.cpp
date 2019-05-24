#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define vl vector<ll>
#define vvi vector< vector<int> >
#define vvl vector< vector<ll> >
#define repd(i, a, b) for (int i=(a);i<(b);i++)
#define rep(i, n) repd(i,0,n)
#define ALL(v) v.begin(), v.end()
#define INF 1e9

using namespace std;

/**
 * calculate GCD(greatest common divisor)
 * @param a
 * @param b
 * @return
 */
unsigned euclidean_gcd(unsigned a, unsigned b) {
    if (a < b) return euclidean_gcd(b, a);
    unsigned r;
    while ((r = a % b)) {
        a = b;
        b = r;
    }
    return b;
}

/**
 * change minimum
 * @tparam T
 * @param a
 * @param b
 * @return bool
 */
template<class T>
inline bool changeMinimum(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

/**
 * change maximum
 * @tparam T
 * @param a
 * @param b
 * @return bool
 */
template<class T>
inline bool changeMaximum(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

/**
 * output answer
 * @tparam T
 * @param answer
 * @return
 */
template<typename T>
T output(T answer) {
    cout << answer << endl;
    return 0;
}

/** ----from here ---------------------------------------------------------- */

int H = 0, W = 0;
int MAX_W = 501;
int MAX_H = 501;

char maze[501][501];
bool reached[501][501] = {};

void search(int x, int y) {
    if (x < 0 || H <= x || y < 0 || W <= y || maze[x][y] == '#') return;
    if (reached[x][y]) return;

    reached[x][y] = true;

    // 4 方向を試す
    search(x + 1, y);// 右
    search(x - 1, y); // 左
    search(x, y + 1); // 下
    search(x, y - 1); // 上
}

int main() {

    cin >> H >> W;

    int sx, sy, gx, gy;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> maze[i][j];
            if (maze[i][j] == 's') {
                sx = i;
                sy = j;
            }
            if (maze[i][j] == 'g') {
                gx = i;
                gy = j;
            }
        }
    }


    search(sx, sy);
    if (reached[gx][gy]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}