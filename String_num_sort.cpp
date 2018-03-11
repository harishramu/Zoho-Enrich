#include <iostream>
using namespace std;

int main() 
{
    int i,j,n,num=0;
    char s[10][10];
    int a[10];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;s[i][j]!='\0';j++)
        {
            if(s[i][j]!='-')
            {
              num=num*10+(s[i][j]-'0');
            }
        }
        if(s[i][0]!='-')
        {
          a[i]=num;
        }
        else
        {
          a[i]=-1*num;
        }
        num=0;
    }
    
    for(i=0;i<n-1;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               num=a[i];
               a[i]=a[j];
               a[j]=num;
           }
       }
    }
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
	return 0;
}
