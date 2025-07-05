/*10. Admission Eligibility Check

Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission.

Click me to see the solution*/



#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);
    int d=a+b+c,f=a+b;
    if(65<=a && 55<=b && 50<=c && 190<=d || 140<=f){
        printf("k");
    }
    else{
        printf("The candidate is not eligible for admission.");
    }
}
