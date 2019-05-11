#include <bits/stdc++.h>

using namespace std;


int main() {

    int R,G,B,N;
    cin >> R >> G >> B >> N;
    long long ans = 0;
    int MAX = N+1;
    bool can1,can2;
    for (int i = 0; i < MAX; ++i) {
        if (i * R > N){ break;}
        can1 = false;
        for (int j = 0; j < MAX; ++j) {
            // if ( j * G > N){ break;}
            if ( R * i  +j * G > N){ break;}
            can2 =false;
            for (int k = 0; k < MAX; ++k) {
                if (k * B > N){ break;}
                int balls = i * R + j * G + k * B;
                if(balls > N ){ break;}
                if (balls == N){
                    //   cout << balls<<"b" <<endl;

                    ans++;
                }
                can2 = true;
            }
            if (can2){ continue;}
            int balls = i * R + j * G ;
            // if(balls > N ){ break;}
            if (balls == N){
                // cout << balls<<"g " <<endl;

                ans++;
            }
            can1 = true;

        }
        if (can1){ continue;}
        if (can2){ continue;}
        int balls = i * R ;
        // if(balls > N ){ break;}

        if (balls == N){
            // cout << balls<<"red " <<endl;
            ans++;
        }

    }
    cout << ans << endl;
}