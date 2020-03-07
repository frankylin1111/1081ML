#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class postoffice
{
	private:
		int savings;
		
	public:
		string name;
		static int psavings;
		
	    postoffice()
	    {
	     	savings = 0;
		}
		
		
		int save()
		{
			cout << name << "先生/小姐妳好,\n" ;
			cout <<"請輸入存(提)款金額(負數表示提款):";
			int money;
			cin >> money;
			savings+=money;
			return money;
		}
		static void operate(int money)
		{
			psavings += money;
		}
		int iook()
		{
			return savings;
		}
		// 類別 postoffice的解構元函式 
		~postoffice()
		{
			
			cout << "動態產生的物件people之記憶體空間,"
			     << "已被釋放並歸還系統" << endl; 
		}
};

int postoffice::psavings=0;

int main()
{
	// 動態產生2個郵局分公司的類別物 
	class postoffice *people;
	people=new class postoffice[2];
	
	int choose;
	int customer;
	people[0].name="羅吉林";
	people[1].name="Logic-Lin";
	int deposit;
	while(1)
	{
		cout <<"1.存(提)款作業 2.查詢個人總存款 "
		     <<"3.查詢郵局總存款 0.結束:";
		cin >>choose;
		if (choose==0)
		   break;
		switch(choose)
		{
			case 1:
				cout <<"\t存(提)款作業\n" ;
				cout <<"輸入存戶編號(2:2號存戶 1:1號存戶):";
				cin >>customer;
				if(customer==1)
				{
					deposit=people[0].save();
					people[0].operate(deposit);
				}
				else if (customer==2)
				{
					deposit=people[1].save();
					people[1].operate(deposit);
				}
				else
				  cout <<"輸入錯誤\n";
				break;
			case 2:
				cout <<"\t查詢存款餘額作業\n";
				cout <<"輸入存戶編號(2:2號存戶 1:1號存戶):" ;
				cin >>customer;
				if(customer==1)
				{
					cout <<people[0].name <<"存戶之存款餘額為:"
					     <<people[0].iook() <<endl;
						  
				}
				else if (customer==2)
				{
					cout <<people[1].name <<"存戶之存款餘額為:"
					     <<people[1].iook() <<endl;
				}
				else 
				  cout <<"輸入錯誤\n";
				break;
			case 3:
			    cout <<"郵局總存款為"
			         << postoffice::psavings<<endl;
			    break;
			default:
			    cout <<"輸入錯誤\n";  
		 } 
	}
	delete [] people;
	system("pause");
	return 0; 
	 
}
