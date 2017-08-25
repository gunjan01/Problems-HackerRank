#include<stdio.h>


int* bubble(int *a, int l)
{

	int i,j,temp;
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}	
	}

	return a;
}

int main()
{

	int a[]={9,6,5,10,15,1,16};
	int l=sizeof(a)/sizeof(a[0]);
	int* b=bubble(a,l);
	int i=0;
	while(i<l)
	{
		printf("%d\t",*b++);
		i++;
	}
	return 0;
}


