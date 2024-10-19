#include <stdio.h>


 number(int n) 
 {
    if (n%2==0) 
	
        printf("%d is even",n);
     
	else 
	
        printf("%d is odd",n);
    
}

 main()
 {
    int n;
   
    printf("Enter any number : ");
    scanf("%d",&n);

    number(n);

    
}

