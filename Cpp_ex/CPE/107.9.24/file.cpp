/*  CPE  ���D-3 
  �sĶ���~: 
  invalid operands of types 'char [10]' and 'int' to binary 'operator%'
  
  �߱o:
       �r���}�C(�r��) �ݱj���૬�����,�~�వ�ƾǹB��
	   ����ܼ� q=atoi(�r��)  �~���T 
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
		q=atoi(buffer);  // �r���૬���r��  
		if (q == 0)
		    break;
		else if ((q %11) == 0)   
		    cout << buffer << " is a multiple of 11."<<endl;
		else
		    cout << buffer << "is not a multiple of 11."<<endl;
	}
	fs.close();
 } 
