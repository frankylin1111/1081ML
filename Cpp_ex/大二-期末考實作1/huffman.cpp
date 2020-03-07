#include <iostream> 
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;
int main()
{
//---------- �D�{���Ϋŧi�� ---------
	fstream fs,fso;
	fs.open("huffman.txt",ios::in|ios::out|ios::trunc);
	fso.open("huffman.txt",ios::in);
	char g,a[58] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N'
	,'O','P','Q','R','S','T','U','V','W','X','Y','Z','[','[','[','[','[','['
	,'a','b','c','d','e','f'
	,'g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x'
	,'y','z'},buffer[200],buffer2[1];
	int b[58] = {0},c2,min,index=0,sum = 0,s=0,n1;
// ------- �NŪ�����G�g�J�ɮ�------------ 
	while((c2=getchar()) != 10)
	{
		if ((c2-65) >=0 &&  (c2-65) <26)
		{
			s =s+1;
			fs << a[c2-65];
			b[c2-65] = b[c2-65] + 1;
		}
		if ((c2-65) >=32 && (c2-65) <58)
		{
			s =s+1;
			fs << a[c2-65];
			b[c2-65] = b[c2-65] + 1;
		}
	}
// ------------- �P�_���X��A~Z  �� a~z --------------- 
	fs << '\n';
	for (int j=0;j<58;j++)
	{
		if (b[j] > 0)
		{
			sum = sum+1;
		} 
	}
// --------- �̷ӥX�{���Ƨ@�Ƨ� ------ 
	int total[2][sum]={{0},{0}};
	index = 0;
	for (int i=0;i<58;i++)
	{
		if (b[i] > 0)
		{
			total[0][index] = i;
			total[1][index] = b[i];
			index = index+1;
		} 
	}
	for (int k=0;k<sum;k++)
	{
	    for (int o=k;o<sum;o++)
	    {
	    	if (total[1][k]>total[1][o])
	    	{
	    		min = total[1][k];
	    		total[1][k] = total[1][o];
	    		total[1][o] = min;
	    		min = total[0][k];
	    		total[0][k] = total[0][o];
	    		total[0][o] = min;
			}
		}
	}
// --------- �i��ѽX�åBŪ�J�ɮפ�------- 
	index = sum;
	for (int m=0;m<sum;m++)
	{
		if (sum == 1)
	    {
		    fs << 0;
		    fs <<' '<< (char) (65+total[0][m]);
		    break;
	    }
		if (m !=1)
		{
			index = index-1;
		    n1 = index;
		}    
		for (int n=0;n<n1;n++)
		{
			if (n!=(n1-1))
			{
				fs << 1;
			}
			else
			{
				if (m ==1)
				    fs << 1;
				else
				    fs << 0;
			}
		}
		fs <<' '<< (char) (65+total[0][m]);
		fs <<'\n';
	}
// -------- �q�ɮ�Ū���s�X���G ---------- 
	index = 0;
	fs.seekg(s+2,ios::beg);
	while(fs.getline(buffer,sizeof(buffer),'\n'))
	{
		total[1][index] = atoi(buffer);
		index++;
	}
	fso.seekg(0,ios::beg);
// ---------��X�s�X���G --------- 
	cout << "�s�X���G:";
	for (int q=0;q<s;q++)
	{
		fso.get(g);
		for (int w=0;w<sum;w++)
		{
			if (g == (char) (65+total[0][w]))
			    cout << total[1][w];
		}
	}
// ---------- ��X�ѽX���G --------------- 
	cout <<'\n'<<"�ѽX���G:";
	fso.seekg(0,ios::beg); 
	for (int f=0;f<s;f++)
	{
		fso.get(g);
		cout << g;
	}
// --------- �����ɮ� --------------- 
	fs.close();
	fso.close();
}
