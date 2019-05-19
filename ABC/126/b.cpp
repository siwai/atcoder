#include <bits/stdc++.h>

#define ld long double
#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {

    int S;
//    string S;
    cin >> S;

    int a = S /100;
    int b = S % 100;

//    cout <<a<<endl;cout<<b<<endl;


    bool ay = false;
    bool am = false;
    bool by = false;
    bool bm = false;



    if (a > 0 && a <=12 ){
        ay = true;
        am = true;
    }
    else if (a >= 0){
        ay = true;
    }

    if (b > 0 && b <=12 ){
        by = true;
        bm = true;
    }
    else if (b >=0){
        by = true;
    }

    string ans;
    if (ay && by && am && bm){
        ans = "AMBIGUOUS";

    }

    else if (am && by){
        ans = "MMYY";

    }

    else if (ay && bm){
        ans = "YYMM";

    }

    else{
        ans = "NA";
    }


    cout << ans << endl;

}