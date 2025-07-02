#include<stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c,d,s;
    scanf("%i %i %i",&a,&b,&c);
    d= (a+b+abs(a-b))/2;
    s=(d+c+abs(d-c))/2;
    printf("%i eh o maior\n",s);

}
//this wud be my first time workijng with stdlib.h
//bascically eda holo janina
//now lets talk about abs which means an absolute number
//which removes signs ,if it is positive then it is positive; if it is neg then it becomes +ve.

/*Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:

/* Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

int main() {
    // Write C code here
    int a=-906,b=abs(a);
    printf("%i",b);

    return 0;
}

Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.

Input Samples	Output Samples
7 14 106

106 eh o maior

217 14 6

217 eh o maior
*/
