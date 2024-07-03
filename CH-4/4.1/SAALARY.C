
#include<stdio.h>
#include<conio.h>

main()

{int hra=10,da=5 , ta=8;
 int Salary;

  clrscr();
  printf("enter the value of salary :");
  scanf("%d ",&Salary);
Salary= Salary+(Salary*hra/100)+(Salary*da/100)+(Salary*ta/100);
  printf("%d",Salary);
 getch();
}