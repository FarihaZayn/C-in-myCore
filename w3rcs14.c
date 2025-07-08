/*15. Triangle Validity by Angles

Write a C program to check whether a triangle can be formed with the given values for the angles.
Test Data :
40 55 65
Expected Output :
The triangle is not valid.*/
// Triangle is valid if sum of all 3 angles = 180
// So: if (a + b + c == 180) → Valid triangle
// Else → Not valid triangle

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Test Data: ");
    scanf("%i %i %i", &a,&b,&c);
    if(a+b+c==180){
        printf("The triangle is valid.");
    }
    else {
        printf("The triangle is not valid.");
    }
}
