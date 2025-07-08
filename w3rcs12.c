/*13. Temperature-Based Weather Message

Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
Test Data :
42
Expected Output :
Its very hot.
*/
#include<stdio.h>
int main(){
    int a;
    printf("Temp Data= ");
    scanf("%i",&a);
    if(a < 0){
        printf("Freezing weather");
    }
    else  if(0<a && a<=10){
        printf("Very Cold weather");
    }
    else  if(10<a && a<=20){
        printf("Cold weather");
    }
    else  if(20<a && a<=30){
        printf("Normal in Temp");
    }
    else  if(30<a && a<=40){
        printf("Its Hot");
    }
    else  if(40<=a){
        printf("Its Very Hot");
    }
    else  {}
}
