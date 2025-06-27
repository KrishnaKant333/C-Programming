#include <stdio.h>
#include <math.h>

int main(){

	int n;
	printf("Enter a five digit number : \n");
	scanf("%d", &n); // eg --> n = 12345

	if(n>=10000 && n<=99999){ // check if n is 5 digit number or not
		int n1, n2, n3, n4, n5;
		n1 = n/pow(10,4); // n1 = 1
		n2 = (n%10000)/pow(10,3); // n2 = 2345/1000 = 2
		n3 = (n%1000)/pow(10,2); // n3 = 345/100 = 3
		n4 = (n%100)/pow(10,1); // n4 = 45/10 = 4
		n5 = (n%10)/pow(10,0); // n5 = 5/1 = 5

		int r = n5*pow(10,4) + n4*pow(10,3) + n3*pow(10,2) + n2*pow(10,1) + n1*pow(10,0);
		printf("The reverse of %d is %d.",n, r);
	}
	else{
		printf("Please enter a five digit number only!");
	}

	return 0;
}
