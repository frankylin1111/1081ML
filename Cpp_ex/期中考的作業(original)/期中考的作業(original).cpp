#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	start:
	cout <<"�w��f����H�֨����ȡA�H�U��������������T"<< '\n';
	cout <<"1.���L"<<'\n'<<"2.����"<<'\n'<< "3.�x��"<<'\n'<<"4.�]��"<<'\n'<<"5.�s��"<<'\n'<<"6.���"<<'\n'<<"7.�x�_"<<'\n';
	int a,b,c,d;
	cout <<"�п�ܰ_��(�N��):";
	cin >> a;
	cout <<"�п�ܤ��~���a��(�N��)�A�Y�����~���a(�п�J0):";
	cin >> b;
	cout <<"�п�ܲׯ�:";
	cin >> c;
	cout <<'\n';
	
	if (a<=7 && b!=0 && c<=7)
	{
	    cout <<"���u�f���u�����~���a"<<'\n';
	    if(a>b && b>c)
	    {
	    	d=(a-b)*5+(b-c)*10+95;
	    	cout <<"���n��"<<'\n'<<"���欰"<<d; 
		}
		else if(c>b && b>a)
		{
			d=(c-b)*5+(b-a)*10+95;
			cout <<"���_��"<<'\n'<<"���欰"<<d; 
		}
		else
		{
		  cout <<"���O�L�����u�f���u"<<'\n'<<'\n';
		  goto start;
		}
	}
		
    else if (a<=7 && b==0 && c<=7)
    {
	    cout <<"�L�u�f���u"<<'\n';
	    if (a>c)
		{
			d=(a-c)*10+95;
			cout <<"���n��"<<'\n'<<"���欰"<<d; 
		}
		else
		{
			d=(c-a)*10+95;
			cout <<"���_��"<<'\n'<<"���欰"<<d; 
		}
    }
		
	else
	{
	    cout << "�п�J���T��������T";
	    goto start;
	}
		
	 
	 
	return 0; 
} 
