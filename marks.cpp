# include <iostream>
using namespace std;

void checkresult(int marks);

main()

{
  while(true)
  {

    int obtainedmarks;
    cin>> obtainedmarks;
    checkresult(obtainedmarks);
    
  }

}

void checkresult(int marks)
{


  if(marks > 50)
  {
    cout <<"Pass" << endl;
  }

  if(marks < 50)
  {
    cout <<"fail" << endl;
  }
 
  if(marks == 50)
  {
    cout << " Please study" << endl;
  }
}