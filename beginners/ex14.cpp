#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int maximum, minimum;


  maximum = max(A, B);
  maximum = max(maximum, C);

  minimum = min(A, B);
  minimum = min(minimum, C);

  int diff = maximum - minimum;

  cout << diff << endl;

}
