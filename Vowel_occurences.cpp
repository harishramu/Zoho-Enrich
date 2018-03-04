#include <iostream>
using namespace std;

int main() 
{
    string s;
    char vow[]={'a','e','i','o','u'};
    int count=0,i,j;
	getline(cin,s);
	
	for(j=0;j<5;j++)
	{
	    count=0;
	    for(i=0;i<s.length();i++)
	    {
	        if(tolower(s[i])==vow[j])
	        {
	            count++;
	        }
	    }
	    if(count>0)
	    {
	      cout<<vow[j]<<" --> "<<count<<endl;
	    }
	}
	
	
	return 0;
}
