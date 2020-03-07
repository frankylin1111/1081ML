#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream fs;
	fs.open("daily_expense.txt",ios::in);
	char buffer[200];
	fs.seekg(72,ios::beg);
	while (fs.getline(buffer,sizeof(buffer)))
	{
		cout << string (buffer).substr(10,4) << '\n';
    }
} 
