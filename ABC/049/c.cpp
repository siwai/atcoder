// 参考URL: https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-9-%E5%95%8F--abc-049-c---daydream-300-%E7%82%B9

#include <bits/stdc++.h>

using namespace std;

int main() {


    string divide[4] = {"dream", "dreamer", "erase", "eraser"};

    string S;
    cin >> S;


    // 前後入れ替え
    reverse(S.begin(), S.end());
//    cout << S;

    int N = S.size();

    // divide
    for (int i = 0; i < 4; ++i) {
        reverse(divide[i].begin(), divide[i].end());
    }
    bool can =true;
    string str;
    for (int i = 0; i < N; ++i) {
        bool flag = false;
        for (int j = 0; j < 4; ++j) {
            string d = divide[j];
            str = S.substr(i, d.size());
            if (str == d) {
                flag = true;
                i += d.size();
            }
        }
        if (!flag) {
            can = false;
            break;
        }

    }
    string ans;
    if (!can) {
        ans = "NO";
    }

    if (can){
        ans = "YES";
    }


    cout << ans << endl;


}
