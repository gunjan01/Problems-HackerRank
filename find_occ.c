#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int main()
{
	char s[MAX];
	char s1[MAX];
	scanf("%s %s",s,s1);

	//find occurence

	int l1=strlen(s);
	int l2=strlen(s1);
	int i,j,count=0,found=1;
	for(i=0;i<=l1-l2;i++)
	{
		found=1;
		for(j=0;j<l2;j++)
		{
			if(s[i+j]!=s1[j])
			{
				found=0;
				break;
			}
		}
		if(found==1)
			count++;
		
	}
	printf("%d",count);
		
	return 0;
}
