#include <iostream>
using namespace std;

int add(int x, int y){
  return x + y;
}

int main(void){
  int a, b;
  cin >> a >> b;

  int sum = add(a, b);

  cout << sum << endl;
  return 0;
}
