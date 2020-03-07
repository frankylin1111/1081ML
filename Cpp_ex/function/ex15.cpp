/*
    ㄧΑ更
	Overloading 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
void printdata(int);
void printdata(int , char);
int main()
{
	cout << "Τ把计printdataㄧΑ挡狦:\n";
	printdata(3);
	cout << "Τ把计printdataㄧΑ挡狦:\n";
	printdata(3,'a');
	system("pause");
	return 0;
}
void printdata(int num)
{
	int i,j;
	for (i=0;i<num;i++)
	{
		for (j=1;j<=i+1;j++)
		{
			cout << j;
		}
		cout << '\n';
	}
}

void printdata(int num,char ch)
{
	int i,j;
	for (i=0;i<num;i++)
	{
		for (j=3-i;j>0;j--)
		{
			cout << ch;
		}
		cout << '\n';
	}
}
