#include<stdio.h>
#include<conio.h>

main()
{  float pi=3.14;
   int r;
   clrscr();

   printf("Enter the value of r :");
   scanf("%i",&r);
   printf("\n\n");
   printf("The penmeter of the circle :");
   printf("%.2f * %.2f * %i = %.2f",pi,pi,r,pi*pi*r);




    getch();
}