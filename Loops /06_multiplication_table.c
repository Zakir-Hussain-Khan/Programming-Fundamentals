// Print multiplication table of a number
#include<stdio.h>

int main (){
        int num;
        printf("Enter your number: ");
        scanf("%d",&num);
     if(num <= 0){
        printf("Please enter a positive number!\n");
    }else{
        for(int i=1; i<=10;i++){
        int table = num*i;
        printf("%d x %d = %d\n", num, i, table);
    }

        }
    return 0;
}
