//Nicholas Caceres
//4/26/2020
//Lab 8
//COP 2220 06

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 5

void Q1 (void);
void zero (double bigNums[];
int add1AndSum (int oneTooSmall[]);
void Q3 (void);

int main()
{
    Q1();
    zero();
    add1AndSum();
    Q3();
    return 0;
}

void Q1 (void)
{
    int apples[SIZE]= {2,4,6,8,10};
    int *aPtr;
    int i;
    for (i=0; i<SIZE; ++i){
        printf("%d\n", apples[i]);
    }

    if (aPtr= &apples[0])
        printf("The address that aPtr is pointing to is %p.\n", aPtr );

    aPtr= &apples[0];
    switch (aPtr){
    case &apples[0]:
        printf("%p\n", aPtr);
        break;
    case &apples[0]:
        printf("%p\n", aPtr);
        break;
    case &apples[0]:
        printf("%p\n", aPtr);
        break;
    case &apples[0]:
        printf("%p\n", aPtr);
        break;
    case &apples[0]:
        printf("%p\n", aPtr);
        break;
    default:
        printf("Invaild\n");
    }


}

void zero(double bigNums[])
{

}

int add1AndSum(int oneTooSmall[])
{
    return;
}

void Q3 (void)
{
    float number1= 7.3;
    float number2;
    double *fPtr;
    fPtr= &number1;
    printf("The value of fPtr is %p\n", fPtr);
    number2= fPtr;
    printf("The value of number2 is %f\n", number2);
    printf("The address of number1 is %p\n", &number1);
    printf("The address of fPtr is %p\n", &*fPtr);


}



