/*
    ------------- 2020/03/17 --------------------------
    uva10057
    1. ��X����ơC
	2. �p�⦳�X�өM����Ƥ@�˪��Ʀr�C���(cases)�O���ƭӮɤ���Ʀ�2�ӡB��ƬO�_�ƭӮɤ���Ʀ�1�ӡC
	3. ��X�i�঳�X�س̤p��(�]�t���b�ҿ�J����Ƹ̭�)�A��Ƭ��_�ƭӮɵ��׬�1�A��Ƭ����ƭӮɵ��׬�2�Ӥ���Ƭ۴�[1�C
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
	int n=0;
	while(cin >> n)
	{
		int m[n],k=0,A1=0,flag = 0;
		for (int i =0;i<n;i++)
		{
			cin >> m[i];
		}
		sort(&m[0],&m[n]);
		if ((n%2) == 0)
		{
			k = (n-1)/2;
			A1 = abs(m[k+1]-m[k])+1;
			for (int i=0;i<n;i++)
			{
				if ((m[i] == m[k]) || (m[i] == m[k+1]))
				    flag++;
			}
			cout << m[k] << " " << flag << " " << A1 <<endl;
		}
		else
		{
			k = (n-1)/2;
			for (int i=0;i<n;i++)
			{
				if ((m[i] == m[k]))
				    flag++;
			}
			cout << m[k] << " " << flag << " " << 1 << endl;
		}
	}
	return 0;
}
