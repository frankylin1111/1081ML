/*
    ------------------- 2020/04/13 ----------------------
    1. UVA�L 
*/
#include <iostream>
using namespace std;
 
int main()
{
     
    int n,x1,y1,x2,y2,i;
     
    cin>>n;//��J����ƶq 
    for(i=1;i<=n;i++)
    {
        cin>>x1>>y1>>x2>>y2;//��J����
        int count=0;
         
         
        count+=(y1+x1+1+y2+x2)*(y2+x2-y1-x1)/2;//�p��q�_�l���u��̫᪺�u���B�� 
        count+=(x2-x1);//�վ�~�t
          
        cout<<"Case "<<i<<": "<<count<<endl;//��X 
    }
    return 0;
}
