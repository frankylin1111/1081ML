#include <cstdlib>
#include <iostream>

using namespace std;
int main()
{
	int year,month,days,flag=0;
	cin>>year>>month>>days;
	
	int date = days ;
	
	if (year%4==0 && year%100!=0 || year%400==0)
	  flag=1;
	switch ( month ) {
         case 12: date += 30;
         case 11: date += 31;
         case 10: date += 30;
         case 9: date += 31;
         case 8: date += 31;
         case 7: date += 30;
         case 6: date += 31;
         case 5: date += 30;
         case 4: date += 31;
         case 3: date += 28;
         case 2: date += 31;          
    }
    
    if (flag==1 && month>=3)
      date++;
      
    cout <<date<<'\n';
    
    system ("pause");  
    return 0;
	
	    
}
