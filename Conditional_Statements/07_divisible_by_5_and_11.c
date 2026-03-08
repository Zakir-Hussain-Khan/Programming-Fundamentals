// 7. Check whether a number is divisible by 5 and 11 
#include<stdio.h>

int main(){
    int num;
    printf("Enter your number: ");
    if(scanf("%d", &num) != 1){
        printf("Invalid input! Please enter a numeric value.");
        return 1;
    }
    if(num % 5 == 0 && num % 11 == 0){
        printf("Your number %d is divisible by 5 and 11 ", num);
    } else{
        printf("Your number %d is not divisible by 5 and 11 ", num);
    }
    return 0;
}
