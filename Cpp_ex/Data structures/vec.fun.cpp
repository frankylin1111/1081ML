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
	cout << "myints �]�t:";
	for (i=0;i<20;i++)
	{
		cout << myints.at(i) << " ";
	}   
	cout << '\n' << "ints �]�t:";
	for (i=0;i<5;i++)
	{
		cout << ints.at(i) << " ";
	}
	cout << '\n';
	myints.swap(ints);
	cout << "�洫��:" << '\n';
	myints.erase(myints.begin()+2);
	cout << "myints �]�t:";
	for (i=0;i<myints.size();i++)
	    cout << myints[i] << " ";
	cout << '\n' << "ints �]�t:";
	for (i=0;i<ints.size();i++)
	    cout << ints[i] << " "; 
	cout << '\n';
	system("pause");
	return 0;
}
