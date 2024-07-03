#include<stdio.h>
#include<conio.h>

main()

{int x,y;
 int ans;

 clrscr();
 printf("The value of x :");
 scanf("%d",&x);
 printf("The value of y :");
 scanf("%d",&y);


 ans = (x*x)-(2*x*y)+(y*y);
 printf("Enter The value :");
 printf("%d",ans);

 getch();
}