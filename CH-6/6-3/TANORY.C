#include<stdio.h>
#include<conio.h>

main()
{ int a,b,c;
  clrscr();
  printf("Enter Your Namber a :");
  scanf("%d",&a);
  printf("Enter Your Namber b :");
  scanf("%d",&b);
  printf("Enter Your Namber c :");
  scanf("%d",&c);

  (a<b)
       ?printf("%d is manimum",a)
       :printf("%d is manimum",b);
       clrscr();
  (a<c)
       ?printf("%d is manimum",a)
       :printf("%d is manimum",c);
       clrscr();
  (b<a)
      ?printf("%d is manimum",b)
       :printf("%d is manimum",a);

  (b<c)
      ?printf("%d is manimum",b)
      :printf("%d is manimum",c);
      clrscr();

  (c<b)
       ?printf("%d is manimum",c)
       :printf("%d is manimum",b);
       clrscr();
  (c<a)
       ?printf("%d is manimum",c)
       :printf("%d is manimum",a);

  getch();
}