#include<stdio.h>
int main(){
     int num1, num2, sum, diff, product, quotient, rem;
    printf("Enter the first number: \n");
    scanf("%d",&num1);
    printf("Enter the second number: \n");
    scanf("%d",&num2);
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1/num2;
    rem = num1 % num2;
    printf("The sum of the two number is: %d \n",sum);
    printf("The difference of the two number is: %d \n",diff);
    printf("The product of the two number is: %d \n",product);
    printf("The quotient of the two number is: %d \n",quotient);
    printf("The remainder of the two number is: %d \n",rem);
}