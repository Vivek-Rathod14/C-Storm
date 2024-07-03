#include<stdio.h>
#include<conio.h>

main()
{  int n;
   char h;
   clrscr();
   printf("\t\t\t|----------------|\n");
   printf("\t\t\t|WELCOME JIO CALL|\n");
   printf("\t\t\t|----------------|\n\n");

   printf("POV : Hindi me baat karne ke liye 1 dabaye\n");
   printf("POV : Gujrati me baat karne ke liye 2 dabaye\n");
   printf("POV : English me baat karnw kw liye 3 dabaye\n\n");

   printf("Enter any namber :");
   scanf("%d",&n);

   switch(n)
   {
     case 1 :
	     clrscr();
	     printf("HINDI!\n\n");

	     printf("POV : 28 Din ka recharge karne ke liye A dabaye\n");
	     printf("POV : 90 Din ka recharge karne ke liye B dabaye\n");
	     printf("POV : 365 Din ka recharge karne ke liye C dabaye\n\n");

	     printf("Enter any namber :");
	     fflush(stdin);
	     scanf("%ch",&h);

	     switch(h)
	     {
	       case 'A':
	       case 'a':
			clrscr();
			printf("28 DIN KA RECHARGE CONFIRM");
			break;

	       case 'B':
	       case 'b':
			clrscr();
			printf("90 DIN KA RECHARGE COMFIRM");
			break;

	       case 'C':
	       case 'c':
			clrscr();
			printf("365 DIN KA RECHARGE COMFIRM");
			break;

	      }
	     break;


     case 2 :
	    clrscr();
	    printf("GUJRATI!\n\n");

	     printf("POV : 28 Divas nu recharge karva A dabavo\n");
	     printf("POV : 90 Divas nu recharge karva B dabavo\n");
	     printf("POV : 365 Divas nu recharge karva C dabavo\n");

	     printf("Enter any namber :");
	     fflush(stdin);
	     scanf("%ch",&h);


	     switch(h)
	     {
	       case 'A':
	       case 'a':
			clrscr();
			printf("28 DIVAS RECHARGE COMFIRM");
			break;

	       case 'B':
	       case 'b':
			clrscr();
			printf("90 DIVAS RECHARGE COMFIRM");
			break;

	       case 'C':
	       case 'c':
			clrscr();
			printf("365 DIAVS RECHARGE COMFIRM");
		       break;
	     }

     case 3 :
	    clrscr();
	    printf("ENGLISH!\n\n");

	     printf("POV : Press A to recharge for 28 dayus\n");
	     printf("POV : Press B to recharge for 90 dayus\n");
	     printf("POV : Press C to recharge for 365 dayus\n\n);


	     printf("Enter any namber :");
	     fflush(stdin);
	     scanf("%ch",&h);


	     switch(h)
	     {
	       case 'A':
	       case 'a':
			clrscr();
			printf("28 DAYS RECHARGE COMFIRM");
			break;

	       case 'B':
	       case 'b':
			clrscr();
			printf("90 DAYS RECHARGE COMFIRM");
			break;

	       case 'C':
	       case 'c':
			clrscr();
			printf("365 DAYS RECHARGE COMFIRM");
		       break;
	     }

   }










   getch();
}