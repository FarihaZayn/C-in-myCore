#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    int m=a/365, b=a%365 ,c=b/30, d= b%30;
    printf("%i ano(s)\n",m);
    printf("%i mes(es)\n",c);
    printf("%i dia(s)\n",d);
}

/*Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message �ano(s)�, �mes(es)�, �dia(s)�.

Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.

Input
The input file contains 1 integer value.

Output
Print the output, like the following example.

Input Sample	Output Sample
400

1 ano(s)

*/
