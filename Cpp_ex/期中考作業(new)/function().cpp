// function().cpp
int Pr(int a,int c)
{
	int sum;
//--------起站----------- 
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
	
	if (sum<0) sum=-sum; // sum的正負判斷 
	
	return sum;
}

