#include <stdio.h>

int main() {
    int a;
    //100, 50, 20, 10, 5, 2 and 1.
    /*576

576
5 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00




*/

    scanf("%i",&a);
    printf("%d\n",a);
    int n100=a/100;
    a=a%100;
    int n50=a/50;
    a=a%50;
    int n20=a/20;
    a=a%20;
    int n10=a/10;
    a=a%10;
    int n5=a/5;
    a=a%5;
    int n2=a/2;
    a=a%2;
    int n1=a/1;
    a=a%1;
    printf("%i nota(s) de R$ 100,00\n",n100);
    printf("%i nota(s) de R$ 50,00\n",n50);
    printf("%i nota(s) de R$ 20,00\n",n20);
    printf("%i nota(s) de R$ 10,00\n",n10);
    printf("%i nota(s) de R$ 5,00\n",n5);
    printf("%i nota(s) de R$ 2,00\n",n2);
    printf("%i nota(s) de R$ 1,00\n",n1);



    return 0;
}
