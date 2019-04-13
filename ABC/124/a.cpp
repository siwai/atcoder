#include <bits/stdc++.h>

using namespace std;

int main() {


    int A, B;
    cin >> A >> B;

    int coins = 0;

    if (A >= B) {
        coins += A;
        A  = A - 1;
    }

    else{
        coins += B;
        B = B -1 ;
    }


    if (A >= B) {
        coins += A;
        A  = A - 1;
    }

    else{
        coins += B;
        B = B -1 ;
    }


    cout << coins << endl;

}
