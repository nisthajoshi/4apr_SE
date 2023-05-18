#include<stdio.h>
main()
{
	float a,b,result;
	int choice;
	       
	
	do
	{    
	        printf("------------------MENU------------------");
			printf("\n1. Addition");
	        printf("\n2. Substraction");
	        printf("\n3. Multiplication");
	        printf("\n4. Division");
	        printf("\n5. Exit");
   	
	printf("\nEnter your choice :- ");
	scanf("%d",&choice);  
	    
		switch(choice)	
	{
		case 1:
			printf("Enter First number :- ",a);
	        scanf("%f",&a);
	        printf("Enter Second Number :- ",b);
	        scanf("%f",&b);
			result=a+b;
			printf("Addition = %f\n",result);
			break;
			
		case 2:
			printf("Enter First number :- ",a);
	        scanf("%f",&a);
	        printf("Enter Second Number :- ",b);
	        scanf("%f",&b);
			result=a-b;
			printf("Substraction = %f\n",result);
			break;
			
		case 3:
			printf("Enter First number :- ",a);
	        scanf("%f",&a);
	        printf("Enter Second Number :- ",b);
	        scanf("%f",&b);
			result=a*b;
			printf("Multiplication = %f\n",result);
			break;
			
		case 4:
			printf("Enter First number :- ",a);
	        scanf("%f",&a);
	        printf("Enter Second Number :- ",b);
	        scanf("%f",&b);
			if(b==0 || a==0)
			{
				printf("Error : Division by zero\n");
			}
			else
			{
			      result=a/b;
			      printf("Division = %f\n",result);	
			}
			 break;
			
		case 5:
		       break;	
		default :
			printf("Invalid Choice !!!!\n");
			break;
	}
	}while(choice !=5);
}
