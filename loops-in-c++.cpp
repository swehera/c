#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, count;
  string yourLine;
  cout << "Your Line: ";
  cin >> yourLine;
  
  cout << "Enter Number: ";
  cin >> n;

  for(count=1; count <= n; count++) {
    cout << yourLine << endl;
  }
  cout << count;

  
  return 0;
}
