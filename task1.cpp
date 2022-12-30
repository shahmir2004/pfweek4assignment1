#include <iostream>
using namespace std;

void product(int number1, int number2);
void add(int number1, int number2);
void subtract(int number1, int number2);
void divide (int number1, int number2);

main()

{
  
  int number1;
  int number2;
  char operation;
 
  cout <<"Enter number 1" << endl;
  cin >> number1;
  
  cout <<"Enter number 2" << endl;
  cin >> number2;
  
  cout <<"Enter the operation you want to perform" << endl;
  cin >> operation;

  if(operation == '+')
  {
  
  add(number1, number2);
  }

  if (operation == '*')
  {
  
  product(number1, number2);
  }

  if(operation == '-')
  {
  
  subtract(number1, number2);
  }
  
  if(operation == '/')
  {
  divide(number1, number2);
  }

}


void product(int number1, int number2)

 {

  int product;
  product = number1 * number2;
  cout << "Your product is: " << product <<endl;

  }


void add(int number1, int number2)

  {

  int total1;
  total1 = number1 + number2;
  cout << "Your sum 1 is: " << total1 <<endl;

  }

void subtract(int number1, int number2)

  {

  int difference;
  difference = number1 - number2;
  cout <<"Difference: " << difference << endl;


  }

void divide(int number1, int number2)

  { 
  
  int division;
  division = number1/number2;
  cout << "Your division's answer is: " << division;
  }

