#include<stdio.h>
#include<string.h>
int main()
{
    char strExp[]="2*2/4*1/1*2*3/2";
    int res=strExp[0]-'0';
    for(int i=1;i<=strlen(strExp);i++)
    {
    	if(strExp[i]=='*')
    	{
    		int l=strExp[i+1]-'0';
    		res*=l;
    		i++;
		}
		else if(strExp[i]=='/')
		{
			int r=strExp[i+1]-'0';
			res/=r;
			i++;
		}
	}
	printf("%d",res);
    return 0;
}