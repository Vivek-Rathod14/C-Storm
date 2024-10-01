#include <stdio.h>

int main()
 {
    int n, i;

  
    printf("Enter Your Number To table  ");
    scanf("%d", &n);


      printf("___________________\n");
    for (i = 1;i<=10;i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
      printf("___________________");
   
}

