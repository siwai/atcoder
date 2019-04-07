#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;

  // ここにプログラムを追記
  int N = str.size();
  int sum = 0;
    for( int i = 0; i < N -2 ; i +=2 ){
      int num = str.at(i);
      string op = str.at(i+1);

      if (op == "+"){
        sum += num;
      }
      if (op == "-"){
        sum -= num;
      }
    }
  cout << sum << endl;
}


