#include<stdio.h>
#include<conio.h>

main()
{ int a,b;
  clrscr();
  printf("Enter First Namber :");
  scanf("%d",&a);
  printf("Enter Second Namber :");
  scanf("%d",&b);

   if (a<b)

   {
    printf("%d number is not greater",a);
   }
   else
   { printf("%d number is not greater",b);
   }

  getch();
}