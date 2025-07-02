#include<stdio.h>
#include<math.h>//u gotta add math babe bcz tmi root over niye kaj krba and u gotta work with sqrt
int main(){
    double x1,x2,y1,y2;
    scanf("%lf %lf\n",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    double r= pow(x2-x1,2)+pow(y2-y1,2);
    double u= sqrt(r);
    printf("%.4lf\n",u);



}
/*Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places, according to the formula:

Distance =

Input
The input file contains two lines of data. The first one contains two double values: x1 y1 and the second one also contains two double values with one digit after the decimal point: x2 y2.

Output
Calculate and print the distance value using the provided formula, with 4 decimal places.

*/
