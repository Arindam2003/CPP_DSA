#include <stdio.h>
int main(){
    int a , b , min , max , rem;
    printf ("Enter two number: ");
    scanf ("%d %d", &a, &b);

    max = a > b ? a : b;
    min = a < b ? a : b;

    while (max % min !=0 ){
        rem = max % min;
        max = min;
        min = rem;
    }
    printf ("HCF is %d", min);
    
    getch ();
}