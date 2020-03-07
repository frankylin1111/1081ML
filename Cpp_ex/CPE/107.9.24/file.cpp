/*  CPE  考題-3 
  編譯錯誤: 
  invalid operands of types 'char [10]' and 'int' to binary 'operator%'
  
  心得:
       字元陣列(字串) 需強迫轉型成整數,才能做數學運算
	   整數變數 q=atoi(字元)  才正確 
*/ 
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{
	char buffer[10];
	int q;
	fstream fs;
	fs.open("write.txt",ios::in);
	while(fs.getline(buffer,sizeof(buffer),'\n'))
	{
		q=atoi(buffer);  // 字串轉型成字元  
		if (q == 0)
		    break;
		else if ((q %11) == 0)   
		    cout << buffer << " is a multiple of 11."<<endl;
		else
		    cout << buffer << "is not a multiple of 11."<<endl;
	}
	fs.close();
 } 
