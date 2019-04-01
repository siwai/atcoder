#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  string  bar ="]";



  // iを0からはじめる
  int i = 0;

  // iが5未満の間ループ
  while (i < A) {
    cout << bar;
    i++;
  }
    cout << endl;


  // iを0からはじめる
     i = 0;

    // iが5未満の間ループ
    while (i < B) {
      cout << bar ;
      i++;
    }
  cout << endl;
}
