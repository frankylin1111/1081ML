#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main()
{
   int x=1;
   for (int i=0;i<2033;i++)
   {
   	    x=x*166;
   	    x=x%2257;
   }
   cout << x;
}
