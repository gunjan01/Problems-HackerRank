#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100


int main()
{
	char s[MAX];
	scanf("%s",s);
	int l=strlen(s);
	int max=0,index,i,j,k;

	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]==s[j])
			{
				index=j;
				break;
			}
		}
		if(j!=l)
		   k=index-i;
		if(k>max)
	           max=k;
	}
	printf("%d",max-1);

	return 0;
}
