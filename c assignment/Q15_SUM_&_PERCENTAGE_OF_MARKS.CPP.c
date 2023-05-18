#include<stdio.h>
main()
{
	float a,b,c,d,e,f,Total,percentage;
	printf("Enter the marks obtained in Physics :- ");
	scanf("%f",&a);
	printf("Enter the marks obtained in Chemistry :- ");
	scanf("%f",&b);
	printf("Enter the marks obtained in Maths :- ");
	scanf("%f",&c);
	printf("Enter the marks obtained in Computer :- ");
	scanf("%f",&d);
	printf("Enter the marks obtained in Hindi :- ");
	scanf("%f",&e);
	printf("Enter the marks obtained in English :- ");
	scanf("%f",&f);
	Total=a+b+c+d+e+f;
	percentage=Total/600*100;
	if (percentage>75)
	{
		printf("%f Distinction",percentage);
	}
	else if (percentage>60 && percentage<=75)
	{
		printf("%f First Class",percentage);
	}
	else if (percentage>50 && percentage<=60)
	{
		printf("%f Second Class",percentage);
	}
	else if (percentage>35 && percentage<=50)
	{
		printf("%f PASS",percentage);
	}
	
	else
	{
		printf("FAIL");
	}
	
}
