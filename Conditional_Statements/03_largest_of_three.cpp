// 3. Find the largest of 3 numbers 
#include<stdio.h>

int main(){
    int num1,num2,num3;
    printf("Enter your number:");
    if(scanf("%d %d %d", &num1,&num2,&num3)!=3){
        printf("Invalid input! Please enter a numeric value.");
        return 1;
    }
    
    if(num1>=num2 && num1>=num3){
        printf("%d is the largest of 3 Numbers",num1);
    } else if(num2>=num1 && num2>=num3){
        printf("%d is the largest of 3 Numbers",num2);
    } else{
        printf("%d is the largest of 3 Numbers",num3);
    }
    return 0;
}
