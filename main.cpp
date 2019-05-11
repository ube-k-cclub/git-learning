#include <iostream>
using namespace std;

int tax(int x){
  return x * 0.08; // 消費税のみの金額を返す
}

int main(void){
  int a, b;
  cin >> a >> b;

  int sum = a + b;
  sum = tax(sum);

  cout << sum << endl;
  return 0;
}
