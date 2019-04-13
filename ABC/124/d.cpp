#include <bits/stdc++.h>

using namespace std;


int counts(string str, int N) {

    int max = 0;
    char current;

    int count = 1;
    for (int i = 0; i < N; ++i) {
        if (str[i] == current) {
            count++;
        } else{
            current = str[i];
            if (max <= count){
                max = count;
            }
            count = 1;
        }
    }
    return max;
}



int main() {

    int N, K;

    cin >> N >> K;

    string S;
    cin >> S;


    int max_ =0;

    for (int l = 0; l < K ; ++l) {


        string A;

        int max = 0;
        int count;

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N - i; ++j) {
                A = S;
                for (int k = i; k < j; ++k) {
                    if (A[k] == '0') {
                        A[k] = '1';
                    } else {
                        A[k] = '0';
                    }
                    count = counts(A, N);

                    if (count >= max) {
                        max = count;
                    }
                }
            }
        }
        if (max >= max_) {
            max_ = max;
        }


    }


    int ans = max_;
    cout << ans << endl;
}








//11101010110011
//11101010001111
//11110011111111