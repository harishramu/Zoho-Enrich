#include <iostream>
using namespace std;

int main() 
{
	int num,t,a[1000],n,i=0,temp,c=0;
	cin>>num>>t;
	while(num>0)
	{
	    a[i]=num%10;
	    num=num/10;
	    i++;
	}
	n=i;
	while(c<t)
	{
	  temp=a[n-1];   
	  for(i=n-2;i>=0;i--)
	  {
	    a[i+1]=a[i]; 
          }
	 a[0]=temp;
	 c++;
        }
    
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i];
    }
    
	return 0;
}
