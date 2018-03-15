#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[10][10]={0};
   int i=0,j=n/2,c,l,m;
   
   for(c=1;c<=(n*n);c++)
   {
       l=i; m=j;
       a[l][m]=c;
       i--;
       j++;
       while(a[i][j]!=0||i<0||j>n-1)
       {
        if(i<0)
         {
           i=n-1;
         }
        if(j>n-1)
         {
           j=0;
         }
        if(a[i][j]!=0)
         {
           i=l+1;
           j=m;
         }
       }
   }
   
   for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
        {
          cout<<a[i][j]<<" ";
        }
       cout<<"\n";
     }
}