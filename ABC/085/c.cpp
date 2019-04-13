#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, Y;
    cin >> N >> Y;

    const int YUKICHI = 10000;
    const int HIGUCHI = 5000;
    const int NOGUCHI = 1000;

    int x = -1;
    int y = -1;
    int z = -1;

    int total;
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N - i; ++j) {
            // 1000円札の枚数は N - i - j 枚のみ
            total = YUKICHI * i + HIGUCHI * j + NOGUCHI * (N - i - j);
            if (total == Y) {
                x = i;
                y = j;
                z = N - i - j;
            }
        }
    }

    cout << x << " " << y << " " << z << " " << endl;

}
