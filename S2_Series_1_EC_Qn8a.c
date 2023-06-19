#include <stdio.h>
int main(){
    int sum;
    for (int i = 100 ; i>0;i--){
        sum +=i;
        printf("\n%d",i);
    }
    printf("\nsum = %d",sum);
    return 0;
}