#include<stdio.h>

int main (){
    char a;
    printf ("enter the alphabet : ");
    scanf ("%c",&a);
    if (a =='a' || a =='b' || a =='c' || a =='d' || a =='e' || a =='f' || a =='g' || a =='h' || a =='i'
        || a =='j' || a =='k' || a =='l' || a =='m' || a =='n' || a =='o' || a =='p' || a =='q' || a =='r'
        || a =='s' || a =='t' || a =='u' || a =='v' || a =='w' || a =='x' || a =='y' || a =='z'){
        printf ("%c",a );
        printf (": is an alphabet" );
    }
    else {
        printf ("it's not an aiphabet");
    }
    return 0;
}
