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
			cout << name << "����/�p�j�p�n,\n" ;
			cout <<"�п�J�s(��)�ڪ��B(�t�ƪ�ܴ���):";
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
		// ���O postoffice���Ѻc���禡 
		~postoffice()
		{
			
			cout << "�ʺA���ͪ�����people���O����Ŷ�,"
			     << "�w�Q������k�٨t��" << endl; 
		}
};

int postoffice::psavings=0;

int main()
{
	// �ʺA����2�Ӷl�������q�����O�� 
	class postoffice *people;
	people=new class postoffice[2];
	
	int choose;
	int customer;
	people[0].name="ù�N�L";
	people[1].name="Logic-Lin";
	int deposit;
	while(1)
	{
		cout <<"1.�s(��)�ڧ@�~ 2.�d�߭ӤH�`�s�� "
		     <<"3.�d�߶l���`�s�� 0.����:";
		cin >>choose;
		if (choose==0)
		   break;
		switch(choose)
		{
			case 1:
				cout <<"\t�s(��)�ڧ@�~\n" ;
				cout <<"��J�s��s��(2:2���s�� 1:1���s��):";
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
				  cout <<"��J���~\n";
				break;
			case 2:
				cout <<"\t�d�ߦs�ھl�B�@�~\n";
				cout <<"��J�s��s��(2:2���s�� 1:1���s��):" ;
				cin >>customer;
				if(customer==1)
				{
					cout <<people[0].name <<"�s�ᤧ�s�ھl�B��:"
					     <<people[0].iook() <<endl;
						  
				}
				else if (customer==2)
				{
					cout <<people[1].name <<"�s�ᤧ�s�ھl�B��:"
					     <<people[1].iook() <<endl;
				}
				else 
				  cout <<"��J���~\n";
				break;
			case 3:
			    cout <<"�l���`�s�ڬ�"
			         << postoffice::psavings<<endl;
			    break;
			default:
			    cout <<"��J���~\n";  
		 } 
	}
	delete [] people;
	system("pause");
	return 0; 
	 
}
