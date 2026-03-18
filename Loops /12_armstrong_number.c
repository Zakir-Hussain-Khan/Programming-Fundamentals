// Check whether a number is Armstrong
#include <stdio.h>
int main() {
    int num;
    int count = 0;
    int eachdigit;
    int sum = 0;
    int power;
    int i;
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num;

    while(num > 0){
       num = num/10;
        count++;
    }
    num = originalNum;

    while(num > 0){
       eachdigit = num%10;
       power = 1;
        for(i = 1; i <= count; i++){
            power = power * eachdigit;
        }       
               
        sum = sum + power;
        num = num / 10;
    }
    if(sum == originalNum){
    printf("Armstrong number");
}
else{
    printf("Not an Armstrong number");
}


    return 0;
}
