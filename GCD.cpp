#include <stdio.h>
#include <stdlib.h>
int main() 
{ 
	int n1,n2,gcd; 
	printf("Enter the two numbers : ") ; 
	scanf("%d %d", &n1, &n2) ;  
	while(n1 != n2) 
	{ 
		if(n1 > n2) 
		n1 = n1 - n2 ; 
		if(n2 > n1) 
		n2 = n2 - n1 ; 
	} 
	gcd = n1 ; 
	printf("\nThe GCD is : %d",gcd);
	return 0;
}
