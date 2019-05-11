#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    string answers;
    cin >> answers;
    int score1= 0;
    int score2= 0;
    int score3= 0;
    int score4= 0;

    for (int i = 0; i < N; ++i) {
        char answer = answers[i];
        if (answer == '1') { score1++; }
        if (answer == '2') { score2++; }
        if (answer == '3') { score3++; }
        if (answer == '4') { score4++; }
    }
    int maxAns = max({score1, score2, score3, score4});
    int minAns = min({score1, score2, score3, score4});
    cout << maxAns << " " << minAns << endl;


}