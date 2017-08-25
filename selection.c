#include<stdio.h>

/* Selection is the simplest. Most intuitive. 

Pick the min element. and start putting them on the left side. 

time complexity : outer i loop: n-1
		  inner j : n-1+n-2+n-3.....1= (n-1)(n)/2 *c
                  total = c1(n-1) + n(n-1)/2*c +c3(n-1)
   		 a ploynomial of n2
		 O(n*n)


space : constant space

i
*/

void selection(int* a,int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}

	for(i=0;i<n;i++)
		printf("%d\n",a[i]);

}

int main()
{
	int a[]={9,7,6,15,16,5,10,11};
	int l=(sizeof(a)/sizeof(a[0]));
	
	selection(a,l);
	return 0;

}
