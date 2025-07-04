#include<stdio.h>
int main(){
    int a;
    printf("Test Data: ");
    scanf("%d",&a);
    if (a>0){
        printf("1");


    }
    else if(a==0){
        printf("0");
    }
    else if(a<0){
        printf("-1");
    }
    else {
        printf("default");
    }

}


/*. Signum Function Implementation

Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
Test Data : -5
Expected Output :
The value of n = -1

Click me to see the solution*/
