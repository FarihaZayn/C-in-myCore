#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    int b=a/3600,c=(a%3600)/60,f=(a%3600)%60;
    printf("%d:%d:%d\n",b,c,f);
}

/*Input
The input file contains an integer N.
Output
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

Input Sample	Output Sample
556
0:9:16
1
0:0:1
140153
38:55:53*/
