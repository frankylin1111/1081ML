#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	float num=0.0;
	for (int i=0;i<3;i++)
	{
		cout << "0.1+";
		/* 疊翴计0.1纗癘拘砰穦玻ネ粇畉,
		硑Θ疊翴计笲衡┮眔挡狦籔и粄挡狦Τ┮ぃ*/ 
		num = num+0.1; // эΘ num = num+1 穦单 
	}
	cout << "\b ";
	if (num == 0.3) // if (num == 3) 单 
	    cout << "籔0.3单\n";
	else
	    cout << "籔0.3ぃ单\n";
}
