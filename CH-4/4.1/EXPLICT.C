#include<stdio.h>
#include<conio.h>

main()
{ int a=94;
  float pi=3.14;
  clrscr();

  printf("A\t: %d\n",a);
  printf("A\t: %.2f",(float)a);

  printf("\n\n");

  printf("PI\t: %.2f\n",pi);
  printf("PI\t: %d",(int)pi);

 getch();
}