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
    	// cout << buffer �D�� 
    	c[b][0]=buffer;
    	
    	// cout << "���T���׬�:";
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
		  cout <<"�D��"<<i+1<<":"<<c[b][0]<<endl
		       <<"�A�����׬�:";
		  cin >> ans;
		  cout <<"���T���׬�:"<< c[b][1]<<endl;
		  
		  fso << "��"<<i+1<<"�D���׬�"<<c[b][1]<<"  "<<"�A�����׬�:"<<ans<<'\n';
		  
		  if (ans==c[b][1])  correct=correct+10;
		  a[i]=b;
		  i++;
	    }
	}
	
	cout <<endl<<"����:"<<correct/10
	     <<"�D   "<<"����:"<<10-(correct/10)
	     <<"�D   "<<"�X�p:"<< correct<<"��"<<endl;
	     
	fso << "����:"<<correct/10<<"�D   "<<"����:"<<10-(correct/10)<<"�D   "
	   <<"�X�p:"<< correct<<"��"<<'\n';
	   
    fs.close();
    fso.close();
	  
	
	system("pause");  
	return 0;
}
