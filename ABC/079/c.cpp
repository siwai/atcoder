#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 入力
    string ABCD;
    cin >> ABCD;

    // A, B, C, Dを個別の変数に定義
    int A, B, C, D;
    A = ABCD[0] - '0';
    B = ABCD[1] - '0';
    C = ABCD[2] - '0';
    D = ABCD[3] - '0';

    // A, B, C, Dをまとめたベクターを宣言
    vector<int> num = {A, B, C, D};
    // 出力用に'+', '-'の文字を要素とするベクターを宣言
    vector<char> op = {'+', '-'};

    // ビット全探索　ビットパターン 2^3 = 8
    for (int i = 0; i < (1 << 3); i++) {
        int sum = A;
        // ビットパターンと'+', '-'を関連付け
        // "0":'+'
        // "1":'-'
        for (int j = 0; j < 3; j++) {
            if (i >> j & 1) sum -= num[j + 1];
            else            sum += num[j + 1];
        }
        // 出力
        if (sum == 7) {
            cout << A;
            for (int k = 0; k < 3; k++) {
                // ビットパターンiからベクターopの文字を選択
                cout << op[(i >> k) & 1] << num[k + 1];
                if (k == 2) {
                    cout << "=7" << endl;
                    return 0;
                }
            }
        }
    }
}
