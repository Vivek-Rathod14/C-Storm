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
  for(i=0;i<col;i++)
  { 
    for(j=0;j<row;j++)
    { 
      printf("Enter a[%d][%d]",i,j);
      scanf("%d",&a[i][j]);
	}
	printf("\n\n");
  }
  
  for(i=0;i<col;i++)
  { 
    for(j=0;j<row;j++)
    { 
      printf("%d",a[j][i]);
      
	}
	printf("\n\n");
  }
}
