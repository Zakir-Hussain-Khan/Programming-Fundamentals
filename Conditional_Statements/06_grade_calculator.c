// 06. Calculate grade of student based on marks
#include<stdio.h>

int main(){
    int marks;

    printf("Enter your marks: ");

    if(scanf("%d", &marks) != 1){
        printf("Invalid input! Please enter a numeric value.\n");
        return 1;
    }

    if(marks < 0 || marks > 100){
        printf("Invalid number! Please enter a valid value.\n");
    }
    else if(marks >= 90){
        printf("You got A+ Grade\n");
    }
    else if(marks >= 80){
        printf("You got A Grade\n");
    }
    else if(marks >= 70){
        printf("You got B Grade\n");
    }
    else if(marks >= 60){
        printf("You got C Grade\n");
    }
    else if(marks >= 50){
        printf("You got D Grade\n");
    }
    else if(marks >= 40){
        printf("You got E Grade\n");
    }
    else{
        printf("Failed!\n");
    }

    return 0;
}
