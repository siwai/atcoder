#include <bits/stdc++.h>

using namespace std;

int main() {

    int N; cin >> N;
    int A = 7;

    int x;
    vector<int> a(4);

    a[0] = N / 1000;
    x = (N % 1000);
    a[1] = x /100;
    x = x % 100;
    a[2] = x / 10;
    x = x % 10;
    a[3] = x / 1;


    for (int j = 0; j < 3; ++j) {

        
    }
    
    
    
    for (int i = 0; i < 4; ++i) {
        cout << a.at(i);
    }






}
