/*18. Profit and Loss Calculation

Write a C program to calculate profit and loss on a transaction.
Test Data :
500 700
Expected Output :
You can booked your profit amount : 200
*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Test Data: \n");
    scanf("%i %i", &a, &b);
    // Profit = SP - CP when SP > CP
// Loss = CP - SP when CP > SP
// No profit no loss when SP == CP

    if(b>a){
        printf("You can booked your profit amount : %i",b-a);
    }
    else if(a>b){
        printf("You can booked your loss amount : %i" ,a-b);
    }
    else if(a==b){
        printf("No profit no loss");
    }
}
