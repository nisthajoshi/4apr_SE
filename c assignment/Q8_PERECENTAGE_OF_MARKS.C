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
  
    printf("\nPercentage scored = %f",percentage);
	
}
