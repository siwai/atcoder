#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
    int ans;

    int dig;
    int sum = 0;
    int num = N;

    while(num){
        dig = num % 10;
        sum = sum + dig;
        num = num / 10;
    }





    cout << sum << endl;




    // cout << ans << endl;







}
