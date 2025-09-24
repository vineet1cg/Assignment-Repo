#include <stdio.h>

int main()
{
   int i,j,k;
   int n=5;
   for(i=1 ; i<=n ; i++){
       for(j=1;j<=i;j++){
           printf(" ");
       }
       int temp =65;
       for(k=1;k<=i;k++){
           printf("%c",temp++);
       }
       printf("\n");
   }

    return 0;
}
