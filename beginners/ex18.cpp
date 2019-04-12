#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)

    const char WIN = 'o';
    const char LOSE = 'x';
    vector<vector<char>> score(N, vector<char>(N));

//    vector<vector<char>> score(N, vector<char>(N, '-'));

//    vector<vector<char>> score(N, vector<char>(N, '-'));

    // 勝敗を２次元配列に埋める
    for (int j = 0; j < M; j++) {
        score.at(A.at(j)).at(B.at(j)) = WIN;
        score.at(B.at(j)).at(A.at(j)) = LOSE;
    }

    char res;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res =  score.at(i).at(j);

            if (res == 'x' || res == 'o'){
                cout << res;
            }
            else{
                cout << '-';
            }

            if( j == N -1){
                cout << endl;
            } else{
                cout << " ";
            }
        }
    }


}
