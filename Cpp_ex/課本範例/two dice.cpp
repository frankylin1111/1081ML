#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int num1,num2,a,k[11]={0},sum;
	srand((unsigned) time(NULL));
	for (int i=0;i<100;i++)
	{
		num1 = 1+rand()%6;
	    num2 = 1+rand()%6;
	    a = num1+num2;
	    cout << a <<'\n';
	    if (a == 2)
	    {
	    	k[0]++;
		}  
	    else if (a == 3)
	    {
	    	k[1]++;
		}  
	    else if (a == 4)
	    {
	    	k[2]++;
		}
	    else if (a == 5)
	    {
	    	k[3]++;
		}  
	    else if (a == 6)
	    {
	    	k[4]++;
		}  
	    else if (a == 7)
	    {
	    	k[5]++;
		}    
	    else if (a == 8)
	    {
	    	k[6]++;
		}    
	    else if (a == 9)
	    {
	    	k[7]++;
		} 
	    else if (a == 10)
	    {
	    	k[8]++;
		} 
	    else if (a == 11)
	    {
	    	k[9]++;
		} 
	        
	    else
	    {
	    	k[10]++;
		}     
	}
	for (int j=0;j<11;j++)
	{
		cout << j+2 << ":" << k[j] << endl;
		sum = sum+k[j];
	}
	cout << sum;
} 
