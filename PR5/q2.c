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
  int lag=0;
  for(i=0;i<row;i++)
  { 
    for(j=0;j<col;j++)
    { 
     if(a[i][j]>lag)
     {  
       lag=a[i][j];
	 }
	}
	printf("\n\n");
  }
  printf("%d is max",lag);
  
}
