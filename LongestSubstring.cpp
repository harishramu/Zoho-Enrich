#include <iostream>
using namespace std;

void substring(string s,int n)
{
   int i,j,max=0,len=0,pos=0;
   for(i=0;i<n;i++)
   {
      int a[58]={0};//binary list for upper and lower case alphabets 
      for(j=i;j<n;j++)
      {
        int val=s[j]-'A';
        if(a[val]==0)
         {
           a[val]=1;
         }
        else
         {
           len=j-i;
           break;
         }
        if(j==n-1)
          {
            len=(j-i)+1;
            break;
          }
      }
     if(len>max)
      {
          max=len;//length of max substring
          pos=i;//starting position of max substring
      }
   }
   for(i=pos,j=0;j<max;i++,j++)
   {
       cout<<s[i];//output for abacdefb is bacdef
   }
}

int main() 
{
	string s;
	cin>>s;
	int n=s.length();
	substring(s,n);
	return 0;
}
