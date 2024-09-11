#include<stdio.h>
main()
{ 
   int row;
   printf("Enter row number : ");
   scanf("%d",&row); 
    
   int a[row];
   int i;
   
   for(i=0;i<row;i++)
   {  
      printf("Enter a[%d] : ",i); 
      scanf("%d",&a[row]);
	}
	int neg = 0;
   for(i=0;i<row;i++)
   {  
     if(a[row]<0)
    { 
      printf("%d",a[row]);
		 }    
	else
	{ neg++;
}
		 printf("\n");
   }  
   
   if(neg>0)
   {
	printf("dose Not nagetive number");
   }
	 
}


