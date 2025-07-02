/*Input
The input file contains 2 integer numbers and 1 value of floating point, representing the number, worked hours amount and the amount the employee receives per worked hour.

Output
Print the number and the employee's salary, according to the given example, with a blank space before and after the equal signal.

Input Samples	Output Samples
25
100
5.50

NUMBER = 25
SALARY = U$ 550.00

*/


#include<stdio.h>
int main(){
    int id,h;
    float m;
    scanf("%d",&id);
    scanf("%d",&h);
    scanf("%f",&m);
    printf("NUMBER = %d\n",id);
    printf("SALARY = U$ %.2f\n",h*m);
    return 0;

}
