//  Find GCD of two numbers 
#include<stdio.h>
int main(){
    int num1;
    int num2;
    int i;
    int min;
    int gcd = 0;
    printf("Enter first number");
    scanf("%d", &num1);
    printf("Enter second number");
    scanf("%d", &num2);
    if(num2>num1){
        min = num1;
    } else {
        min = num2;
    }
    for(i=1; i <= min; i++){
        if(num1%i==0 && num2%i==0){
            gcd = i;
        }
        
    }
    printf("%d", gcd);
    return 0;
}
