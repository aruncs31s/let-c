#include <stdio.h>

int main() {
   int number;
   printf("Enter the Number : ");
   scanf("%d",&number);

  
   for (;;number/=10)
   {
    printf("%d",number%10);
        if(number < 9){
            break;
        }

   }
}