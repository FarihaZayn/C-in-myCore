/*Expected Output :
Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First
*/
#include<stdio.h>
int main(){
    int r,p,c,ca,pc;
    char na[100],d[50];
    printf("Roll No : ");
    scanf("%i",&r);
    printf("Name of Student : ");
    scanf("%s",&na);
    printf("Marks in Physics : ");
    scanf("%d",&p);
    printf("Marks in Chemistry : ");
    scanf("%i",&c);
    printf("Marks in Computer Application : ");
    scanf("%i",&ca);
    pc=p+c+ca;
    printf("Total Marks = %i\n",pc);
    double ps=pc*100.0/300;
    printf("Percentage = %.2lf\n",ps);
    if(80<=ps){
        printf("Division = first\n");
    }
    else  if(60<=ps){
        printf("Division = 2nd\n");
    }
    else  if(40<=ps){
        printf("Division = 3rd\n");
    }
     else if(20<=ps){
        printf("Division = failed\n");
    }
    else {}
}
