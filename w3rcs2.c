#include<stdio.h>
int main(){
    int a;
    printf("Test Data: ");
    scanf("%d",&a);
    if (a%2!=0){
        printf("%i is an odd integer",a);

    }
    else {
        printf("even");
    }

}


/*2. Even or Odd Check

Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output :
15 is an odd integer*/
