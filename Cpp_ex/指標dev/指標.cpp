#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i,j,p,num[2][3][2]={1,3,-1,6,4,7,0,1,2,-5,9,11};
	int *ptr;
	
	ptr= num[0][0];
	
	for(i=0;i<2;i++)
	  for (j=0;j<3;j++)
	    for (p=0;p<2;p++)
	    {
	    	cout << setw (5) << *(*(*(num+i)+j)+p);
	    	// 表示將ptr指向num陣列的第[i][j][k]個元素的位址 
		}
	  
	cout << '\n';
	system("pause");
	return 0;
	
} 
