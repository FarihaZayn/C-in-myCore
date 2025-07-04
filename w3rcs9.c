#include<stdio.h>
int main(){
    int x,y;
    scanf("%i %i",&x,&y);
    /*Quadrant Formula:
First Quadrant → x > 0 and y > 0

Second Quadrant → x < 0 and y > 0

 → x < 0 and y < 0

Fourth Quadrant → x > 0 and y < 0

*/
    if(x>0&&y>0)
        {
        printf("The coordinate point (%i,%i) lies in the First quadrant",x,y);
    //x>0 and y>0 means ora sbai ++
    }
    else if (x<0 && y>0){
        printf("The coordinate point (%i,%i) lies in the Second Quadrant",x,y);
        //ekhane x<0 holo x is neg
    }
    else if (x<0 && y<0){
        printf("The coordinate point (%i,%i) lies in the Third Quadrant",x,y);
        //ekhaneevery1 is neg
    }
    else if (x>0 && y<0){
        printf("The coordinate point (%i,%i) lies in the Fourth Quadrant",x,y);

    }
    else{
        printf("na");
    }
}
/*9. Coordinate Quadrant Identification

Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant*/

