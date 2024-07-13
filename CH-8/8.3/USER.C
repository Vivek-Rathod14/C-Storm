#include<stdio.h>
#include<conio.h>

main()

{  int n,a;
   clrscr();

   printf("Enter any namber :");
   scanf("%d",&n);
   printf("Enter any namber :");
   scanf("%d",&a);

   while(n<=a)
   {
     printf("%d\t",n);
     n++;
   }



   getch();
}