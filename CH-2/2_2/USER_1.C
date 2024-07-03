#include<stdio.h>
#include<conio.h>
main()
{
   int r;
   float pi=3.14;
  clrscr();
   printf("Enter the value of r :");
   scanf("%d",&r);
   printf("The radius of circle ;");
   printf("%f * %i * %i = %.2f",pi,r,r,pi*r);

   getch();
}