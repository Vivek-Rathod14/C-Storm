#include<stdio.h>
#include<conio.h>
main()
{
    int n,leng=0;
    clrscr();
    printf("Enter any number :");
    scanf("%d",&n);

    while(n!=0)
    {
      n=n/10;
      leng++;


    }

    printf("%d",leng);

    getch();
}