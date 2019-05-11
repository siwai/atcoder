#include <bits/stdc++.h>

using namespace std;

int main() {


    int N;
    cin >> N;
    int ans = 0;

    vector<char> a(3);
    a[0] = '7';
    a[1] = '5';
    a[2] = '3';

    bool flagOfSeven = false;
    bool flagOfFive = false;
    bool flagOfThree = false;
    bool flagOfOthere = false;

    int n = 0;
    while (n < N) {
        flagOfSeven = false;
        flagOfFive = false;
        flagOfThree = false;
        flagOfOthere = false;
        string str = to_string(n);

        int len = str.length();
        for (int i = 0; i < len; ++i) {
            for (int j = 0; j < 3; ++j) {
                char ch = str[i];
//                if (ch == a[j]) {
//                    if (j == 0) { flagOfSeven = true; }
//                    if (j == 1) { flagOfFive = true; }
//                    if (j == 2) { flagOfThree = true; }
//                }

                if( ch == '7'){flagOfSeven = true;}
                else if( ch == '5'){flagOfFive = true;}
                else if( ch == '3'){flagOfThree = true;}
                else{flagOfOthere = true;break;}
            }
        }

        if (flagOfSeven && flagOfFive && flagOfThree && !flagOfOthere) {
            ans++;
        }
        n++;
    }

    cout << ans << endl;

}