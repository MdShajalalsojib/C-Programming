#include<stdio.h>
int main(){
    int number1,number2,sum;
    printf("Enter 1st number : ");
    scanf("%d",&number1);
    printf("Enter 2nd number : ");
    scanf("%d",&number2);

    sum=number1+number2;
     printf("Enter the sum result : %d + %d = %d", number1, number2, sum);
    return 0;
}
