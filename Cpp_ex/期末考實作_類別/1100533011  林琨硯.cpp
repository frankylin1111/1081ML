// �����ҧ@�~.cpp 
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// -----------�ŧi pub ----------------- 
class pub
{
	private:
		string name;
		int a,c;
		int sum,total;
	public:
		static int use;
		static string location[7];
// ---------- �غc���禡 ------------- 
		pub()
		{
			cout << "pub has been create!" << endl;
			cin >> name;
			sum = 0;
			total = 0;
		}
// -------------�Ѻc���禡--------------		
		~pub()
		{
			cout << "�w�g�Q�ϥΤF" << use << "��" ;
			cout << "pub has been deleted!" << endl;
		}
	    string get_name()
	    {
	    	return name;
		}
// ------------ �ʲ��禡 ---------------- 
		void select()
		{
		    use++;
			cout <<"�w��f����H�֨����ȡA�H�U��������������T"<< '\n';
			for (int i=0;i<7;i++)
	            cout << i+1 <<"."<< location[i] << '\n';
	        cout <<"�п�ܰ_��(�N��):";
	        cin >> a;
	        cout <<"�п�ܲׯ�(�N��):";
	        cin >> c;
	        
//-------- �_�� ----------- 
	        switch(a)
	        {
		        default:
			        sum=0;
			        break;
		        case 1:
			        sum=sum+95;
		        case 2:
			        sum=sum+95;
		        case 3:
			        sum=sum+95;
		        case 4:
			        sum=sum+95;
		        case 5:
			        sum=sum+95;
		        case 6:
			        sum=sum+95;
		        case 7:
			        sum=sum+95;
			
	        }
//--------�ׯ�-----------	
	        switch(c)
	        {
	        	
		        default:
		            sum=0;
			        break;
		        case 1:
			        sum=sum-95;
		        case 2:
			        sum=sum-95;
		        case 3:
			        sum=sum-95;
		        case 4:
			        sum=sum-95;
		        case 5:
			        sum=sum-95;
		        case 6:
			        sum=sum-95;
		        case 7:
			        sum=sum-95;
			
	        }
	        
	    }
	    
	    void route()
	    {
		    if(sum<0)
		    {
		        sum = -sum; 
		        cout << "�q" << location[a-1] << "�f��" << location[c-1] << "   ";
		        cout << "���欰:" << sum; 
		    }
		    else if (sum>0)
		    {
		        cout << "�q" << location[a-1] << "�f��" << location[c-1] << "   ";
		        cout << "���欰:" << sum;
		    }
		    else
		    {
		        cout << "�S�����ظ��u" ;
		    }
		    total +=sum;
		    sum = 0;
	    }
// ---------�d�߻���禡------------	
	    void addtotal()
	    {
	    	use++;
		    cout <<"�A���O�ά�:NT$"<< total << endl;
	    }	
	
};
// -------��l�� static member ------------ 
int	pub::use =0;
string pub::location[7]={"���L","����","�x��","�]��","�s��","���","�x�_"};

// -------------�D�{��Main()-------------- 
int main()
{
	// ----------�ŧipub[7]���C�Ӧa��----------- 
	int b,a=0;
	pub  guest[2];
	while(b!=4)     //�O�_�~���ʶR 
	{
		
		int v = a%2;
		cout << guest[v].get_name() << ",�w��A�ϥγ�H�ʲ��t��!" 
		     << endl 
			 << "�N��1:�ʲ�   �N��2:�`����   �N��3:�����ϥΪ�   �N��4:����  ==>"; 
		cin >> b;
//----------�\��---------------- 
		switch(b)
		{
			case 1:
				cout << guest[v].get_name() << endl;
				guest[v].select();
				guest[v].route();
				cout <<'\n'<< '\t' << '\t' << '\t' << '\t';
				break;
			case 2:
			    guest[v].addtotal();
			    cout << '\t' << '\t' << '\t' << '\t';
			    break;
			case 3:
				a++;
				system("cls");
				break;
			case 4:
				system("cls");
				break;
			default:
                b=4;
                system("cls");
				break;	
		}
    }
    
    return 0; 
}
