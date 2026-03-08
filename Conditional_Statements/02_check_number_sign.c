// 2. Check whether a number is positive, negative, or zero
#include<stdio.h>

int main(){
    int num;

    printf("Enter your number: ");

    if(scanf("%d", &num) != 1){
        printf("Invalid input! Please enter a numeric value.");
        return 1;
    }
    if(num>0){
        printf("%d is a positive", num);
    }
    else if(num< 0){
        printf("%d is a negative", num);
    } else{
        printf("The number is zero");
    }
    return 0;
}
