#include <iostream>
using namespace std;

int main() 
{
    int a[1000],f[1000]={0},count=0;
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    count=0;
	    if(f[i]!=1)
	    {
	        for(j=i;j<n;j++)
	        {
	            if(a[i]==a[j]&&f[j]!=1)
	            {
	                f[j]=1;
	                count++;
	            }
	        }
	        cout<<a[i]<<"-->"<<count<<endl;
	    }
	}
	
	
	
	
	
	
	return 0;
}
