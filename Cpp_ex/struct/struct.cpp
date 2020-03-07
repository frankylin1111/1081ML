#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	int a,b;
	struct data
	{
		int a;
		int b;
		int c;
		void inputdata()
		{
			cout << "a = ";
			cin >> a;
			cout << "b = ";
			cin >> b;
			cout << "c = ";
			cin >> c;
		}
		void printdata()
		{
			cout <<"a = "<< a << endl;
			cout <<"b = "<< b << endl;
			cout <<"c = "<< c << endl;
		}
	};
	struct data d1;
	d1.inputdata();
	cout << "\n";
	d1.printdata();
}
