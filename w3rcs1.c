/*Equality Check

Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Test Data :  ");
    scanf("%i %i",&a,&b);
    if(a==b){
        printf("Number1 and Number2 are equal");
    }
    else{
            printf("Number1 and Number2 arent equal");

    }
}
