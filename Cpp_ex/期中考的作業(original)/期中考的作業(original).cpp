#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	start:
	cout <<"歡迎搭乘單人快車之旅，以下為本次的乘車資訊"<< '\n';
	cout <<"1.雲林"<<'\n'<<"2.彰化"<<'\n'<< "3.台中"<<'\n'<<"4.苗栗"<<'\n'<<"5.新竹"<<'\n'<<"6.桃園"<<'\n'<<"7.台北"<<'\n';
	int a,b,c,d;
	cout <<"請選擇起站(代號):";
	cin >> a;
	cout <<"請選擇中途停靠站(代號)，若未中途停靠(請輸入0):";
	cin >> b;
	cout <<"請選擇終站:";
	cin >> c;
	cout <<'\n';
	
	if (a<=7 && b!=0 && c<=7)
	{
	    cout <<"此優惠路線有中途停靠"<<'\n';
	    if(a>b && b>c)
	    {
	    	d=(a-b)*5+(b-c)*10+95;
	    	cout <<"往南走"<<'\n'<<"價格為"<<d; 
		}
		else if(c>b && b>a)
		{
			d=(c-b)*5+(b-a)*10+95;
			cout <<"往北走"<<'\n'<<"價格為"<<d; 
		}
		else
		{
		  cout <<"但是無此種優惠路線"<<'\n'<<'\n';
		  goto start;
		}
	}
		
    else if (a<=7 && b==0 && c<=7)
    {
	    cout <<"無優惠路線"<<'\n';
	    if (a>c)
		{
			d=(a-c)*10+95;
			cout <<"往南走"<<'\n'<<"價格為"<<d; 
		}
		else
		{
			d=(c-a)*10+95;
			cout <<"往北走"<<'\n'<<"價格為"<<d; 
		}
    }
		
	else
	{
	    cout << "請輸入正確的乘車資訊";
	    goto start;
	}
		
	 
	 
	return 0; 
} 
