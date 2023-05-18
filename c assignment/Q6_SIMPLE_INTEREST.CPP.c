#include<stdio.h>
main()
{
	int p,r,n,simple_interest,total_amount;
	printf("Enter principal amount :- ");
	scanf("%d",&p);
	printf("Enter rate of interest :- ");
	scanf("%d",&r);
	printf("Enter duration in years :- ");
	scanf("%d",&n);
	simple_interest=p*r*n/100;
	printf("The simple intrest is :- %d",simple_interest);
	total_amount=p+simple_interest;
	printf("\nYour total amount after given time is :- %d",total_amount);
	
	
	
}
