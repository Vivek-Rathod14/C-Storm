#include<stdio.h>
#include<conio.h>

main()
{ int a=10,b=20;
 clrscr();
 printf("Befor swaping :\n");
 printf("A=10 \n B=20 ");
 printf("\n\n");
 printf("After Swaping :\n");
 a=a*b;
 b=a/b;
 a=a/b;
 printf(" A=%d \n B=%d ",a,b);

 getch();
}