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
	int i,j,count=0,found=1,k=0;
	for(i=0;i<=l1-l2;i++)
	{
		found=1;
		k=0;
		for(j=i;j<(i+l2);j++)
		{
			if(s[j]!=s1[k++])
			{
				found=0;
				break;
			}
		
		}
		if(found==1)
		{
			int l=j-l2;
			for(l=j-l2;l<l1;l++)
				s[l]=s[l+l2];
			break;
		}
		
		
	}

	printf("%s",s);
		
	return 0;
}
