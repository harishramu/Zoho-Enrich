#include <iostream>
using namespace std;

int main()
{
    int num,count=0;
    int a=2;
    float b=2.0;
    cin>>num;
    
   while(num>0)
   {
	 if(num/b>num/a)
	 {
	    count++;
	 }
	 num=num/2;
   }
   cout<<count;
   
	return 0;
}
