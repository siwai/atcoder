#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;
    vector<int> a(M);
    vector<int> b(M);
    vector<int> city(N, 0);


    for (int i = 0; i < M; ++i) {
        cin >> a[i];
        cin >> b[i];
    }

    for (int i = 0; i < M; ++i) {
        city[a[i] - 1]++;
        city[b[i] - 1]++;
    }

    for (int i = 0; i < N; ++i) {
        cout << city[i] << endl;
    }
}