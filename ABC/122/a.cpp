#include <bits/stdc++.h>

using namespace std;

int main() {

    char b; cin >> b;
    string ans;
    if (b == 'A') {ans = 'T';}
    if (b == 'T') {ans = 'A';}
    if (b == 'G') {ans = 'C';}
    if (b == 'C') {ans = 'G';}
    cout << ans << endl;

}