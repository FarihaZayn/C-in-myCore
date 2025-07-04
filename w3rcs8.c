#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    if (b<a && c<a){
        printf("a is biggie");


    }
    else if(a<b && c<b){
        printf("b is biggie");
    }
    else if(c<a && c<b){
        printf("c is biggie");
    }


    else {
        printf("default");
    }

}


/*8. Largest of Three Numbers

Write a C program to find the largest of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three

Click me to see the solution

*/
