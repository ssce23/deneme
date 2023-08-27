#include <stdio.h>
#include <stddef.h>

int *findMid(int a[], int n);

int main()
{
	int a[] ={1,23,4,5,56,34,2};
	int n = sizeof(a)/sizeof(a[0]);
	int *mid = findMid(a, n);
	printf("%d\n",findMid(a, n) );
	printf("%d\n",mid);
	printf("%d\n",*mid);

	return 0;
}

int *findMid(int a[], int n)
{
	
	return &a[n/2];
}