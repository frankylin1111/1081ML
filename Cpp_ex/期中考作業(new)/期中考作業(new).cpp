// 期中考作業.cpp 
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "function().cpp"

using namespace std;

// -------------主程式Main()-------------- 
int main()
{
	// ----------宣告pub[7]有七個地方----------- 
	int b=0;
	int a,c,d;
	string blank,pub[7]={"雲林","彰化","台中","苗栗","新竹","桃園","台北"};
	fstream fs;
	fs.open("票卷.txt",ios::in|ios::out);
	while(b==0)     //是否繼續購買 
	{
		
	    cout <<"歡迎搭乘單人快車之旅，以下為本次的乘車資訊"<< '\n';
	    for (int i=0;i<7;i++)
	        cout << i+1 <<"."<< pub[i] << '\n';
	    cout <<"請選擇起站(代號):";
	    cin >> a;
	    cout <<"請選擇終站(代號):";
	    cin >> c;
	    cout <<"請選擇是否繼續購買(輸入0)，若未繼續購買(請輸入1):";
	    cin >> b;
	    cout <<'\n';
	    if (a>0 && c>0)
	    {
		    d=Pr(a,c);
		    if (d==0)  fs << "沒有這種路線!!"<<'$' << '\n';
		    else fs << "從" << pub[a-1] << "搭到" << pub[c-1] << "   "  // 寫入檔案裡 
		             << "票價為" << d << "元" <<'$' << '\n';  
	    }
	
	    else  
		{
			b=0;
		    cout << "請重新訂購一張新的車票" << '\n';     // 重新訂購 
	    }
    }
    
//------檔案寫出並顯示-------- 
    fs.seekg(0);
    char buffer[400];
    while (fs.getline(buffer,sizeof(buffer),'$'))
        cout << buffer << endl;
	
    return 0; 
}
