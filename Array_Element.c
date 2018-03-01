#include <stdio.h>

int main(void) 
{
	int num,n,flag=0,i=0;
	scanf("%d",&num);
	while(scanf("%d",&n)>0)
	{
	    if(n==num)
	    {
	        flag=1;
	        break;
	    }
	    i++;
	}
	if(flag==0)
	{
	    printf("-1");
	}
	else
	{
	    printf("%d",i);
	}
	
	return 0;
}

