#include <iostream>
#include <cstdlib>
using namespace std;
void deposit(int);
int main()
{
	int money;
	while(1)
	{
		cout << "輸入存提款金額(存款>0,提款<0,結束:0):";
		cin >> money;
		deposit(money);
		if  (money == 0)
		    break; 
    }
    
    system("pause");
    return 0;
}
void deposit(int money)
{
	static int saving=0;
	saving = saving+money;
	cout << "存款餘額:" << saving << '\n'; 
} 
