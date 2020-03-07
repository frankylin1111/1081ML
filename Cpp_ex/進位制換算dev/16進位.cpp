#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int n,backup_n;
	int p,position=0;
	cin >> n;
	backup_n=n;
	cout << "0X";
	while (n!=0)
	{
		//cout.setf(ios::left);
		p = n & 15;
		if (p <10) cout<<p;
		switch (p)
		{
		
			case 10:
				cout << 'A';
				break;
			case 11:
				cout << 'B';
				break;
			case 12:
				cout << 'C';
				break;
			case 13:
				cout << 'D';
				break;
			case 14:
				cout << 'E';
				break;
			case 15:
				cout << 'F';
				break;
			
		}
		n=n>>4;
	}
	/*cout << position <<endl;
	n=backup_n;
	cout << n << "轉成16進位整數\n";
	for (int i=position;i>0;i=i-4)
	{
		cout.setf(ios::left);
		p=(n >>i-4) & 15;
		if (p <10) cout<<p;
		switch (p)
		{
		
			case 10:
				cout << 'A';
				break;
			case 11:
				cout << 'B';
				break;
			case 12:
				cout << 'C';
				break;
			case 13:
				cout << 'D';
				break;
			case 14:
				cout << 'E';
				break;
			case 15:
				cout << 'F';
				break;
			
		}
		//n=n>>4;
	}*/
	cout <<'\n';
	system("pause");
	return 0;
}
