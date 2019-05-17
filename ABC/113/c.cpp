#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {


    int N,M;
    cin >> N >> M;
    vector<int> v(N);
    vector<int> p(M,0); // 県番号管理
    vector<int> y(M,0); // year


    for (int i = 0; i < M; ++i) {
        int temp ;
        cin >> temp;
        p[i] = temp - 1;
        cin >> y[i];
        v[p[i]].push_back(y[i]);
    }

    for(int i = 0; i < N; i++) {
        sort(v[i].begin(), v[i].end());
    }

    for(int i = 0; i < M; i++) {
        int ans = (p[i] + 1) * 1000000 + (int)(lower_bound(v[p[i]].begin(), v[p[i]].end(), y[i]) - v[p[i]].begin()) + 1;
        cout << setfill('0') << setw(12) << ans << endl;
    }



}