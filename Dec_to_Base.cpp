#include <iostream>
using namespace std;

int main() 
{    
    int num,base,i=0;
    int a[100];
	cin>>num>>base;
	while(num>0)
	{
	    a[i++]=num%base;
	    num=num/base;
	}
	i--;
    while(i>=0)
    {
        cout<<a[i];
        i--;
    }
	return 0;
}
