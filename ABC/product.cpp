#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    bool even = false;
    cin >> a >> b;

    n = a * b;

    if (n % 2 == 0) {
        even = true;
    }

    if (even)
    {
        cout << "Even" << endl;
    }

    if (!even)
    {
        cout << "Odd" << endl;
    }

}
