#include <stdio.h>
int main(){

	int n,i,d,r=0;
	printf("Enter a number :\n");
	scanf("%d",&n);

	for (i = n; i > 0; i=i/10)
	{
		d = i%10;
		r = r*10+d;
	}

	printf("The reverse of %d is %d.", n ,r );

	return 0;
}
