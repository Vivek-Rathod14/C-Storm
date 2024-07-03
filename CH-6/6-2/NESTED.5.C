#include<stdio.h>
#include<conio.h>

main()

{  int a,b,c,d;
   clrscr();
   printf("Enter Your Set a :");
   scanf("%d",&a);
   printf("Enter Your Set b :");
   scanf("%d",&b);
   printf("Enter Your Set c :");
   scanf("%d",&c);
   printf("Enter Your Set d  :");
   scanf("%d",&d);

   if (a>b)
   {
       if (a>c)
	{
	  if (a>d)

	 { printf("%d a is max",a);
	 }
	  else
	  { printf("%d is a max",d);
	  }

	}
      else
      {   if (c>d)
	   {  printf("%d is max",c);
	   }

	   else
	   {  printf("%d is max",d);
	   }
      }
   }

   else
   {
     if (b>c)
       {
	  if (b>d)
	   { printf("%d is max",b);
	   }
	   else
	   ("%d is max",d);
       }
      else
      {
	if (c>d)
	{ printf("%d is max",c);
	}
	else
	{ ("%d is max",d);
	}
      }

   }


   getch();
}