#include<stdio.h>
main()
{
	int a,b,c;
	
	
	printf("Enter Your 1 month income : ");
	scanf("%d",&a);
	
	printf("Enter Your 2 month income : ");
	scanf("%d",&b);
	
	if(a>b)
	{
		c=a-b;
		printf("%d is profit ",c);
		 

	}
	else if(b>a)
	{
		c=b-a;
		printf(" -%d is lose  ",c);
		
	}
	 
    


      
      


	
}
