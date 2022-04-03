#include<stdio.h>
int main()
{
	char strExp[]="3+4";
	int l=strExp[0];
	int r=strExp[2];
	printf("%d",l+r-2*'0');
	return 0;
}