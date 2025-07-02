#include<stdio.h>
int main(){
    int a;
    double b;
    scanf("%i\n %lf",&a,&b);
    printf("%.3lf km/l\n",a/b);
    //u gotta a/b u gotta divide


}
/*Input
The input file contains two values: one integer value X representing the total distance (in Km) and the second one is a floating point number Y  representing the spent fuel total, with a digit after the decimal point.

Output
Present a value that represents the average consumption of a car with 3 digits after the decimal point, followed by the message "km/l".

Input Sample	Output Sample
500
35.0

14.286 km*/
