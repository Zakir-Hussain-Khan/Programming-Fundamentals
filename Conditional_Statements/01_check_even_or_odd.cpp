// 1. Check whether a number is even or odd
#include<stdio.h>

int main(){
    int num;
    printf("Enter your number: ");
    if(scanf("%d", &num) != 1){
        printf("Invalid input! Please enter a numeric value.");
        return 1;
    }
    if(num%2==0){
        printf("Your number %d is even", num);
    } else{
        printf("Your number %d is Odd", num);
    }
    return 0;
}
