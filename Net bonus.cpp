 // the net bonus amount
 # include <iostream>

  using namespace std;
 
 int main ()
 {
  int years; 
  int salary;
  int bonus;
  double total;
  
  cout <<" enter years of work : ";
  cin >> years;
  cout<< " enter amount of salary : ";
  cin>> salary;
  
  if ( years >=10)
  {
  	bonus= 0.1* salary;
  }
  else if ( years>=6)	 
  {
  	bonus = 0.08* salary;
  }	 
  else 	 
  {
  	bonus = 0.05* salary;
  } 	 
	 
   total = bonus + salary;
   
   
   cout << " your net bonus is " << bonus<< endl;
   cout << " total salary is "<< total<< endl;	 
	 
	 
    return 0;	 
	 
	 	
 }