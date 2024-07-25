#include<stdio.h>
#include<conio.h>
main()
{   char ch='a',end='z';

    clrscr();

    do
    {

      printf("%c",ch);
      ch++;++ch;++ch,++ch;

    } while(ch<=end);




    getch();
}