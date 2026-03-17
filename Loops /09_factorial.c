// Find factorial of a number
#include <stdio.h>

int main() {
    int num,i;
    long long fact = 1;
    printf("Enter your number: ");
    scanf("%d",&num);
    if(num < 0){
        printf("Not a valid number");
    } else {
        for(i = num; i>=1;i--){
         fact = fact * i;
        }
        printf("Factorial of %d is %lld", num, fact);
    }
    return 0;
}
