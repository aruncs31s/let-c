# let-c

- [Second sem First series Exam June 2023](1st-series-ec)
- 

## Programms 

1. **[Hello World]**(Hello-World)


### **Hello World**

#### Program

```
#include <stdio.h>
void main(void)
{
printf("Hello World\n");


}

```
#### Compilation

```
gcc  Hello_World.c

./a.out

```

### Working


### **Addition of Two Numbers**

#### **Program** 1 
```
#include <stdio.h>
int main(){
    float number1 ;
    float number2;
    number1 = 10;
    number2 = 20;

    float sum = number1 + number2 ; 
    printf("\nSum = %f",sum);

    return 0;
}

```

#### **Output**

```

Sum = 30.000000 


#### **Program 2**

```

#include <stdio.h>
int main(){
    float number1 ;
    float number2;
    number1 = 10;
    number2 = 20;

    int sum = number1 + number2 ; 
    printf("\nSum = %d",sum);
    return 0;
}






## 1st Series EC

7 .  Write a program to find the reverse of a number entered by the user . If the user enters 32465 the reverse of the number is 56423

```
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

```


8 a) . Write a program to print the numbers from 1 to 100 in descending order and display the sum of these numbers.
```
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
```
