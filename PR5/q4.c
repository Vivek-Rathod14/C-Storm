#include<stdio.h>
 main()
{ 
  
  int row,col;
  
  printf("Enter Row Number : ");
  scanf("%d",&row);
  printf("Enter Col Number : ");
  scanf("%d",&col);
  
  int a[row][col];
  int i,j;
  for(i=0;i<row;i++)
  { 
    for(j=0;j<col;j++)
    { 
      printf("Enter a[%d][%d]",i,j);
      scanf("%d",&a[i][j]);
	}
	printf("\n\n");
  }
    int r,c;
    
  printf("Enter Row Number : ");
  scanf("%d",&r);
  
   for(i=0;i<row;i++)
   {   
     for(j=0;j<col;j++)
     {  
       if(r==i)
       {  
	      printf("%d \n",a[i][j]);
	      
	   }

	   
	 }
   }   
   
   
   for(i=0;i<row;i++)
   {   
     for(j=0;j<col;j++)
     {  

	   if(c==j)
       {  
            printf("%d \n",a[i][j]);
	   }
	   
	 }
   }   
    
}
