#include<stdio.h>

int main (){
    float a,b,c;
    printf ("enter the cost price : " );
    scanf ("%f", &a);
    printf ("enter the selling price : " );
    scanf ("%f", &b);
    c = b-a;
    if (c>0){
        printf ("the profit is : '%f' " , c );
    }
    else if (c<0){
        printf ("the loss is : '%f' " , c );
    }
    else if (c==0){
        printf ("there is no profit or loss");
    }
    return 0;
}
