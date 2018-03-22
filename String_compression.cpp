#include <iostream>
using namespace std;

int main() 
{    
    int i,count=0;
    string s;
    cin>>s;
    int n=s.length();
    char a=s[0];
    
    for(i=0;i<n;i++)
    {
        if(s[i]==a)
        {
            count++;
        }
        else
        {
            cout<<a;
            if(count>1)
            {
                cout<<count;
            }
            a=s[i];
            count=1;
        }
    }
    cout<<a;
    if(count>1)
    {
        cout<<count;
    }
}
