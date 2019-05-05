#include <bits/stdc++.h>

using namespace std;

int main() {

    int H,W;
    cin >> H >> W;
    int h, w;
    cin >> h >> w;


    int ans;
    ans = H * W - ( h * W  + w * H ) + (h * w);
    cout  << ans << endl;

}