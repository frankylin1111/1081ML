// 期末考作業.cpp 
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// -----------宣告 pub ----------------- 
class pub
{
	private:
		string name;
		int a,c;
		int sum,total;
	public:
		static int use;
		static string location[7];
// ---------- 建構元函式 ------------- 
		pub()
		{
			cout << "pub has been create!" << endl;
			cin >> name;
			sum = 0;
			total = 0;
		}
// -------------解構元函式--------------		
		~pub()
		{
			cout << "已經被使用了" << use << "次" ;
			cout << "pub has been deleted!" << endl;
		}
	    string get_name()
	    {
	    	return name;
		}
// ------------ 購票函式 ---------------- 
		void select()
		{
		    use++;
			cout <<"歡迎搭乘單人快車之旅，以下為本次的乘車資訊"<< '\n';
			for (int i=0;i<7;i++)
	            cout << i+1 <<"."<< location[i] << '\n';
	        cout <<"請選擇起站(代號):";
	        cin >> a;
	        cout <<"請選擇終站(代號):";
	        cin >> c;
	        
//-------- 起站 ----------- 
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
//--------終站-----------	
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
		        cout << "從" << location[a-1] << "搭到" << location[c-1] << "   ";
		        cout << "價格為:" << sum; 
		    }
		    else if (sum>0)
		    {
		        cout << "從" << location[a-1] << "搭到" << location[c-1] << "   ";
		        cout << "價格為:" << sum;
		    }
		    else
		    {
		        cout << "沒有此種路線" ;
		    }
		    total +=sum;
		    sum = 0;
	    }
// ---------查詢價格函式------------	
	    void addtotal()
	    {
	    	use++;
		    cout <<"你的費用為:NT$"<< total << endl;
	    }	
	
};
// -------初始化 static member ------------ 
int	pub::use =0;
string pub::location[7]={"雲林","彰化","台中","苗栗","新竹","桃園","台北"};

// -------------主程式Main()-------------- 
int main()
{
	// ----------宣告pub[7]有七個地方----------- 
	int b,a=0;
	pub  guest[2];
	while(b!=4)     //是否繼續購買 
	{
		
		int v = a%2;
		cout << guest[v].get_name() << ",歡迎你使用單人購票系統!" 
		     << endl 
			 << "代號1:購票   代號2:總價格   代號3:切換使用者   代號4:結束  ==>"; 
		cin >> b;
//----------功能---------------- 
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
