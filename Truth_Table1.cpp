#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    //program computes truth table of any boolean expression with +(OR) and .(AND)operators
	string s,opr;
	cin>>s;
	int i,j=0,c,varcnt=0;
	int n=s.length();
	//parse input for variables and operators
	for(i=0;i<n;i++)
	{
	    if(s[i]>='A' && s[i]<='Z')
	    {
	        varcnt++;
	        cout<<s[i]<<"\t";
	    }
	    if(s[i]=='+'||s[i]=='.')
	    {
	       opr[j++]=s[i]; 
	    }
	}
	cout<<"OP\n";
	//to enter zeros and ones in input
	int row=pow(2,varcnt);
	int clm=varcnt+1;
	int matrix[row][clm];
	int val=0;
	int k=row/2;
	for(j=0;j<clm-1;j++)
	{
	    for(i=0,c=0;i<row;i++,c++)
	    {
	        if(c==k)
	        {
	            val=!val;
	            c=0;
	        }
	        matrix[i][j]=val;
	    }
	    k=k/2;
	    val=!val;
	}
	//to calculate output
	int result=0;
	for(i=0;i<row;i++)
	{
	  result=0;
	  result=result||matrix[i][0];
	  for(j=1,k=0;j<clm-1;j++,k++)
	  {
	      if(opr[k]=='+')
	      {
	          result=result||matrix[i][j];
	      }
	      else if(opr[k]=='.')
	      {
	          result=result&&matrix[i][j];
	      }
	  }
	  matrix[i][clm-1]=result;
	}
	//print truth table
	for(i=0;i<row;i++)
	{
	    for(j=0;j<clm;j++)
	    {
	        cout<<matrix[i][j]<<"\t";
	    }
	    cout<<"\n";
	}
	
	return 0;
}
