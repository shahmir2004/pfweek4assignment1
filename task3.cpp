#include <iostream>
using namespace std;

void isEven(int number);


main()

{

  int number;
  cout << "Please enter your number";
  cin >> number;
  isEven(number);


}


void isEven(int number)

{  
  int remainder;

  remainder = number%2;
  if (remainder == 0)
  {
    cout <<"Number is even";
   }
  if(remainder!=0)
  {
    cout <<"Number is odd";
  }
}
