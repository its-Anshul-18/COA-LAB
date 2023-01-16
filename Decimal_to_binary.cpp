#include <iostream>
using namespace std;

int main() {
  int decimal, binary = 0, r, product = 1; //r=Remainder
  cout<<"decimal number is:"<<endl;
  
  cin >> decimal;
  int n;
  n=decimal;
  
  if(n<0){
      cout<<"Decimal number is Negative:"<<endl;
  }else
      cout<<"Decimal number is positive:"<<endl;
  
  //To Make Binary Form
  while (decimal != 0) {
    r = decimal % 2;
    binary = binary + (r * product);
    decimal = decimal / 2;
    product *= 10;
  }
  cout << "binary form: " << binary ;
  return 0;
}
