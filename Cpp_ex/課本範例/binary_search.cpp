/*
    Binary search
	�һݮɶ���(1+log2n)/2 
*/
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int a[7]={5,7,12,16,26,58,71},number,left,right,middle;
	cin >> number;
	left=0;
	right=6;
	while(left <= right)
	{
		middle = (left+right)/2;
		if (a[middle] == number)
		{
			cout << "���F" << number 
			     << endl << "�b�ǦC����" << middle+1<< "��";
		    break; 
		}
		else if (number > a[middle])
		{
			left = middle+1;
		}
		else
		{
			right = middle-1;
		}
	}
	if (right<left)
	    cout << "�L����";
}
