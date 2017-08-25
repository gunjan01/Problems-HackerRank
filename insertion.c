#include<stdio.h>

/* 

time complexity : O(n*n)
Space : O(1)

-> increental approach
->stable
->in place
-> used when the number of elements is small. and the array is almost sorted


*/

int* insertionsort(int* a ,int l)
{
	int i,j,key;

	for(i=1;i<=l-1;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	return a;

}

int main()
{
	
	int a[]={9,7,6,15,16,10,11};
	int i=0;	
	int l=(sizeof(a)/sizeof(a[0]));
	int* b=insertionsort(a,l);
	while(i<l)
	{
		printf("%d\n",*b++);
		i=i+1;
	}

	return 0;
}
