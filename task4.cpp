#include <iostream>
using namespace std;


void calculateBill(string day, int amount);

main()
{

 string day;
 int amount;
 
 cout <<"Please enter your amount" <<endl;
 cin >> amount;
 cout <<"Please enter the day of the week"<<endl;
 cin >> day;

 calculateBill(day, amount);


}




void calculateBill(string day, int amount)

{ 
  int payableamount;
  if(day == "sunday")
  {  
    amount = amount*0.9;
    cout << "Your payable amount after discount is " << amount;
  }

 
}
