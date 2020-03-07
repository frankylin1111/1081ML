#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include <ctime>

using namespace std;

int main()
{
	fstream fs,fso;
	fs.open("question.txt",ios::in);
	fso.open("answer.txt",ios::out);
	char c[200],n;
	string a[15][2],ans;
	int s=0,b,correct=0,error,q[10];
	srand((unsigned)time(NULL));
    for(int i=0;i<10;i++)
    {
    	q[i]=0+rand()%15;
    	for(int j=0;j<i;j++)
    	{
    		if(q[i]==q[j])
    		{
    			i--;
    		    break;
			}
    		  
		}
	}
 
    while (fs.getline(c,sizeof(c),'$'))
    {
    	// cout << c 題目 
    	a[s][0]=c;
    	
    	// cout << "正確答案為:";
    	fs.getline(c,sizeof(c));
    	  a[s][1]=c;
    	s++;
    	continue;
    }
    for (int u=0;u<10;u++)
    { 
    	b=q[u];
    	cout <<"題目"<<u+1<<":"<<a[b][0]<<endl
		     <<"你的答案為:";
	    cin >> ans;
	    cout << "正確答案為:"<<a[b][1]<<endl;
	    
	    fso << "第"<<u+1<<"題答案為"<<a[b][1]<<"  "<<"你的答案為:"<<ans<<'\n';
		 
		if (a[b][1] == ans)
		  correct=correct+10;
	}
	cout <<endl<<"答對幾題"<<correct/10
	     <<"  "<<"答錯幾題"<<10-(correct/10)
	     <<"  "<<"合計:"<< correct<<"分";
	     
	fso << "答對幾題"<<correct/10<<"  "<<"答錯幾題"<<10-(correct/10)<<"  "
	   <<"合計:"<< correct<<"分"<<'\n';
    fs.close();
    fso.close();
	

	
	system("pause");
	return 0;
	
} 
