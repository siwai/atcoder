#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define vl vector<ll>
#define vvi vector< vector<int> >
#define vvl vector< vector<ll> >

using namespace std;

int main() {

    string S;
    cin >> S;

    string ans;

    /**
     * 以下の３つの条件を満たすか
     */
    bool doseBeginA = false;
    bool doesIncludeC = false;
    bool isSmallLetter = true;

    // 1個目
    if (S[0] == 'A') {
        doseBeginA = true;
    }

    // 2,3個目
    for (int i = 1; i < S.length(); ++i) {
        char temp = S[i];
        if (temp == 'C' && i > 1 && i != S.length() - 1) {
            if (doesIncludeC){
                doesIncludeC = false;
                break;
            }
            doesIncludeC = true;
        } else if (isupper(temp)) {
            isSmallLetter = false;
        }

    }

    ans = "WA";
    if (doesIncludeC && doseBeginA && isSmallLetter) {
        ans = "AC";
    }

    cout << ans << endl;

    return 0;
}
