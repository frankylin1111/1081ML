#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
	int i;
	vector<int> myints (20);
	vector<int> ints (5); 
	for (i=0;i<5;i++)
	    ints.at(i) = i+1;  
	cout << '\n';
	for  (i=0;i<20;i++)
	    myints.at(i) = i+1;
	cout << "myints 包含:";
	for (i=0;i<20;i++)
	{
		cout << myints.at(i) << " ";
	}   
	cout << '\n' << "ints 包含:";
	for (i=0;i<5;i++)
	{
		cout << ints.at(i) << " ";
	}
	cout << '\n';
	myints.swap(ints);
	cout << "交換後:" << '\n';
	myints.erase(myints.begin()+2);
	cout << "myints 包含:";
	for (i=0;i<myints.size();i++)
	    cout << myints[i] << " ";
	cout << '\n' << "ints 包含:";
	for (i=0;i<ints.size();i++)
	    cout << ints[i] << " "; 
	cout << '\n';
	system("pause");
	return 0;
}
