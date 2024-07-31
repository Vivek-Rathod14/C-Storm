#include<stdio.h>
#include<conio.h>
main()
{
   int n,rev;
   clrscr();
   printf("Enatr any number :");
   scanf("%d",&n);

   while(n>0)
   {
     rev=n%10;
     printf("%d",rev);
     n=n/10;

   }


   getch();
}