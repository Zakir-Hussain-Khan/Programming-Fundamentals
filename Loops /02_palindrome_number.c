// Check whether a number is a palindrome 
#include<stdio.h>

    int main(){
        int num;
        int originalNum;
        int remainder;
        int reverse = 0;
        printf("Enter your number: ");
        if(scanf("%d", &num) != 1){
            printf("Invalid input! Please enter a numeric value.");
            return 1;
        }
        originalNum = num;
       if(num < 0){
           printf("Negative numbers are not considered palindromes.\n");
           return 0;                                                            
        }
        while (num!=0){
            remainder = num%10;
            reverse = reverse * 10 + remainder;
            num = num/10;
 
        }
        if(originalNum == reverse){
            printf("Palindrome Number\n");
            } 
            else {
            printf("Not a Palindrome Number\n");
            }
        return 0;
    }
