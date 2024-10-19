#include<stdio.h>
main()
{
	
	int size;
	printf("Enter any size : ");
	scanf("%d",&size);
	
	int a[size],i,sum=0;
	
	for(i=0;i<size;i++)
	{
		 printf("Enter any %d  : ",i+1);
        	scanf("%d",&a[i]);
        	
          sum=sum+a[i];
	    	
		
	}
	
		 printf(" %d   ",sum);
}

