#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {

    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    vector <int> s;
    cout << "---"<<endl;
    for (int i = 0; i <N ; ++i) {
        vector<int> t;
        t.push_back(a[i]);
        int M = t.size();

        vector<int> tt;
        for (int j = M - 1; j <= 0; --j) {
            tt.push_back(t[j]);
        }
        cout << "---"<<endl;
        s &= tt;
        for (int i = 0; i < s.size(); ++i) {
            cout << s[i];

        }
    }
    for (int i = 0; i < s.size(); ++i) {
        cout << s[i];
        
    }

}
