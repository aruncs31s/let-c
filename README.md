# let-c

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

```
