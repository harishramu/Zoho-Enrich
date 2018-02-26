#include <stdio.h>
#include <string.h>

int main(void) 
{
    int n,i,j;
    char num[1000],temp;
    scanf("%s %d",num,&n);
    int l=strlen(num);
    
    while(i<n)
    {
       temp=num[l-1];    
        for(j=l-1;j>=0;j--)
        {
            num[j]=num[j-1];
        }
        num[0]=temp;
        i++;
    }
    
   printf("%s",num);
   
	return 0;
}

