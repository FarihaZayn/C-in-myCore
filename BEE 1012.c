/*Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.

Input
The input file contains three double values with one digit after the decimal point.

Output
The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message (in Portuguese) and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.

Input Samples	Output Samples
3.0 4.0 5.2

TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000*/
#include<stdio.h>
int main(){
    double a,b,c,p=3.14159;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("TRIANGULO: %.3lf\n",a*c/2);
    printf("CIRCULO: %.3lf\n",p*c*c);
    printf("TRAPEZIO: %.3lf\n",((a+b)*c)/2 );
    printf("QUADRADO: %.3lf\n",b*b);
    printf("RETANGULO: %.3lf\n",a*b);
}
