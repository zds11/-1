#include<stdio.h>
#include<string.h>
int main()
{
    char strExp[]="2+2*3+2/2-1";
    int res=strExp[0]-'0';
    int a=0,b=0,c=0,d=0;
    for(int i=1;i<=strlen(strExp);i++)
    {
    
    	if(strExp[i]=='*')
    	{
    		a+=(strExp[i+1]-'0')*(strExp[i-1]-'0');
			i++;
		}
		else if(strExp[i]=='/')
		{
			b+=strExp[i-1]/strExp[i+1];
		}
	    else if(strExp[i]=='+')
		{
		     if(strExp[i+2]=='*'||strExp[i+2]=='/' )
		     {
		     	continue;
			 }
			 else
			 {
			 	c=strExp[i+1]-'0';
			    i++; 
			 }
		}
		 else if(strExp[i]=='-')
		{
			if(strExp[i+2]=='*'||strExp[i+2]=='/' )
			{
				continue;
			}
			else
			{
				d=strExp[i+1]-'0';
			    i++;
			}
	    }
	}
	printf("%d,%d,%d,%d,%d",res+a+b+c-d,a,b,c,d);
    return 0;
}