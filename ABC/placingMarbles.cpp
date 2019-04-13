#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    cin >> num;
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        if (num[i] == '1')
        {
            ans++;
        }
    }
    cout << ans << endl;

}
