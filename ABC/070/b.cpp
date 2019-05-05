#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, d;

    cin >> a >> b >> c >> d;
    int ans;

    // 重複期間があるか
    if  (c >= b)
    {
        cout << 0 << endl;
        return 0;
    }

    int start = max(a,c);
    int last = min(b,d);

    ans = last - start;

    ans = max(0, ans);

    cout << ans << endl;

}
