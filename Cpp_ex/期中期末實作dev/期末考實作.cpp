#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<ctime>

using namespace std;

int main()
{
	fstream fs,fso;
	fs.open("question.txt",ios::in);
	fso.open("answer.txt",ios::app);
	int a[10],b,correct=0;
	string c[15][2],ans;
	char buffer[200];
	int flag=0;
	int i=0;
	while (fs.getline(buffer,sizeof(buffer),'$'))
    {
    	// cout << buffer 題目 
    	c[b][0]=buffer;
    	
    	// cout << "正確答案為:";
    	fs.getline(buffer,sizeof(buffer));
    	  c[b][1]=buffer;
    	b++;
    	continue;
    }
	srand((unsigned)time(NULL));
	while (i<10) //for (int i=0;i<10;i++)
    {
    	b=0+rand()%14;
    	flag =0;
    	for (int j=0;j<i;j++)
    	{
    	
    		if(b==a[j])
    		{
    			flag =1;
    			break;
			}
    		   
		}
		if (flag ==0)
		{
		  cout <<"題目"<<i+1<<":"<<c[b][0]<<endl
		       <<"你的答案為:";
		  cin >> ans;
		  cout <<"正確答案為:"<< c[b][1]<<endl;
		  
		  fso << "第"<<i+1<<"題答案為"<<c[b][1]<<"  "<<"你的答案為:"<<ans<<'\n';
		  
		  if (ans==c[b][1])  correct=correct+10;
		  a[i]=b;
		  i++;
	    }
	}
	
	cout <<endl<<"答對:"<<correct/10
	     <<"題   "<<"答錯:"<<10-(correct/10)
	     <<"題   "<<"合計:"<< correct<<"分"<<endl;
	     
	fso << "答對:"<<correct/10<<"題   "<<"答錯:"<<10-(correct/10)<<"題   "
	   <<"合計:"<< correct<<"分"<<'\n';
	   
    fs.close();
    fso.close();
	  
	
	system("pause");  
	return 0;
}
