#include <bits/stdc++.h>

using namespace std;


int calculateSumOfDigits(int x){

    int sum = 0;

    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {

    int N, A, B;
    cin >> N >> A >> B;

    int total = 0;


    int digits;
    for (int i = 0; i <= N; ++i) {
        digits = calculateSumOfDigits(i);
        if ( A <= digits && B >= digits){
            total += i;
        }
    }

    cout << total << endl;

}
