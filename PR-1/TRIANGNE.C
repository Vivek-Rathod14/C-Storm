#include<stdio.h>
#include<conio.h>

main()

{
 int a;
  int b;
  int ans;
  clrscr();
 printf("Enter The First Angle a : ");
 scanf("%d",&a);
 printf("Enter The Second Angle b :");
 scanf("%d",&b);
 ans = 180 -(a+b);
 printf("%d",ans);
 getch();
}