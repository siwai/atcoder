#include <bits/stdc++.h>

using namespace std;

int main() {

    int A, B, C, D, E;
    vector<int> dish;

    //cin >> A >> B >> C >> D >> E;
    for (int i = 0; i < 5; ++i) {
        cin >> dish.at(i);
    }

    int a,m;
    int min  = -1;
    int count =0;
    for (int i = 0; i < 5; ++i) {
        a = dish.at(i) % 2;
        if (a == 0){
            m = dish.at(i) / 10;
            //m +=1;
        }
        if (a != 0){
            if (min == -1){
                min = a;
            }
            else if (min >= a){
                min = a;
            }
            m = dish.at(i) / 10 ;
            m +=1;


        }
        count += m;

        // dish(i) = m;
    }
    int ans;
    ans = count * 10 + min;
    cout << ans << endl;





}

