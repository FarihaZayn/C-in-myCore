/*Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.

- Don�t forget to print the line's end after the result, otherwise you will receive �Presentation Error�.

- Don�t forget the blank spaces.

Input
The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and the total value sold by him/her.

Output
Print the seller's total salary, according to the given example.

Input Samples	Output Samples
JOAO
500.00
1230.30

TOTAL = R$ 684.54

*/


#include<stdio.h>
int main(){
    char name[100];
    double sa,am;
    scanf("%s",&name);
    scanf("%lf",&sa);
    scanf("%lf",&am);
    printf("TOTAL = R$ %.2lf\n", sa+(0.15*am));
    return 0;

}
