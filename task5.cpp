#include <iostream>
using namespace std;


void calculateBill(string day, float amount);

int main()
{

 string day;
 float amount;
 
 cout <<"Please enter your amount" <<endl;
 cin >> amount;
 cout <<"Please enter the day of the week"<<endl;
 cin >> day;
 calculateBill(day, amount);
 
 return 0;
} .0000001




void calculateBill(string day, float amount)

{ 
  float payableamount;
  if(day == "sunday")
  {  
    amount = amount*0.9;
    cout << "Your payable amount after discount is " << amount;
  }
 
  if (day!="sunday")
  { 
    amount = amount*0.95;
    cout << "Your payable amount after discount is " << amount;
   }
}